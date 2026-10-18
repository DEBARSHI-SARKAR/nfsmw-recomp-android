// worker.js - imports, status and saves in the origin private file system
// (OPFS), off the page's thread. Layout: /<game id>/game/... (the game, its
// .manifest.json and .stamp) and /<game id>/profile/... (saves and settings).
import { importGame, gameStatus, ZipReader, zipWrite, Sha256 } from "./core.js";

let controller = null;

async function dirFor(path, create = true) {
  let dir = await navigator.storage.getDirectory();
  for (const part of path.split("/").filter(Boolean))
    dir = await dir.getDirectoryHandle(part, { create });
  return dir;
}

async function fileFor(root, rel, create) {
  const parts = rel.split("/");
  const name = parts.pop();
  let dir = root;
  for (const p of parts) dir = await dir.getDirectoryHandle(p, { create });
  return dir.getFileHandle(name, { create });
}

function opfsStore(root) {
  return {
    async readText(rel) {
      try {
        return await (await (await fileFor(root, rel, false)).getFile()).text();
      } catch {
        return null;
      }
    },
    async writeText(rel, text) {
      const handle = await fileFor(root, rel, true);
      const access = await handle.createSyncAccessHandle();
      const bytes = new TextEncoder().encode(text);
      access.truncate(0);
      access.write(bytes, { at: 0 });
      access.flush();
      access.close();
    },
    async remove(rel) {
      const parts = rel.split("/");
      const name = parts.pop();
      try {
        let dir = root;
        for (const p of parts) dir = await dir.getDirectoryHandle(p);
        await dir.removeEntry(name);
      } catch {}
    },
    async hash(rel) {
      const file = await (await fileFor(root, rel, false)).getFile();
      const sha = new Sha256();
      const reader = file.stream().getReader();
      for (;;) {
        const { done, value } = await reader.read();
        if (done) break;
        sha.update(value);
      }
      return sha.hex();
    },
    // The manifest, written only after close, is what marks a file complete,
    // so a file cut short is never trusted and is simply written again.
    async createWriter(rel) {
      const handle = await fileFor(root, rel, true);
      const access = await handle.createSyncAccessHandle();
      access.truncate(0);
      let at = 0;
      return {
        async write(bytes) {
          const n = access.write(bytes, { at });
          if (n !== bytes.length) throw new DOMException("short write", "QuotaExceededError");
          at += n;
        },
        async close() {
          access.flush();
          access.close();
        },
        async abort() {
          try { access.close(); } catch {}
        },
      };
    },
  };
}

// Sources ---------------------------------------------------------------
function filesSource(files) {
  // [{path, file}] from a folder input or a drop.
  const entries = files.map(({ path, file }) => ({
    path: path.replaceAll("\\", "/").replace(/^\/+/, ""),
    size: file.size,
    mtime: Math.floor((file.lastModified || 0) / 1000),
    isDir: false,
    file,
  }));
  return { list: async () => entries, stream: async (e) => e.file.stream() };
}

async function handleSource(dirHandle) {
  const entries = [];
  const walk = async (dir, prefix) => {
    for await (const [name, h] of dir.entries()) {
      const path = prefix ? prefix + "/" + name : name;
      if (h.kind === "directory") {
        entries.push({ path, size: 0, mtime: 0, isDir: true });
        await walk(h, path);
      } else {
        const file = await h.getFile();
        entries.push({ path, size: file.size, mtime: Math.floor(file.lastModified / 1000), isDir: false, file });
      }
    }
  };
  await walk(dirHandle, dirHandle.name);
  return { list: async () => entries, stream: async (e) => e.file.stream() };
}

async function zipSource(file) {
  const zip = await ZipReader.open(file);
  return { list: async () => zip.entries(), stream: (e) => zip.stream(e) };
}

async function freeBytes() {
  try {
    const { quota, usage } = await navigator.storage.estimate();
    return quota - usage;
  } catch {
    return undefined;
  }
}

async function listFiles(dir, prefix, out) {
  for await (const [name, h] of dir.entries()) {
    const path = prefix ? prefix + "/" + name : name;
    if (h.kind === "directory") await listFiles(h, path, out);
    else out.push({ path, handle: h });
  }
  return out;
}

// Messages --------------------------------------------------------------
const handlers = {
  async status({ game }) {
    const root = await dirFor(game.id + "/game");
    const status = await gameStatus(game, opfsStore(root));
    const estimate = await navigator.storage.estimate().catch(() => ({}));
    const persisted = await navigator.storage.persisted?.().catch(() => false);
    return { status, estimate, persisted };
  },
  async import({ game, kind, files, handle, file }) {
    controller = new AbortController();
    let source;
    if (kind === "files") source = filesSource(files);
    else if (kind === "handle") source = await handleSource(handle);
    else source = await zipSource(file);
    const root = await dirFor(game.id + "/game");
    const outcome = await importGame(game, source, opfsStore(root), {
      signal: controller.signal,
      freeBytes: await freeBytes(),
      onProgress: (p) => postMessage({ progress: p }),
    });
    controller = null;
    return outcome;
  },
  async cancel() {
    if (controller) controller.abort();
    return {};
  },
  async delete({ game }) {
    const dir = await dirFor(game.id);
    await dir.removeEntry("game", { recursive: true }).catch(() => {});
    return {};
  },
  async exportSaves({ game }) {
    const dir = await dirFor(game.id + "/profile");
    const files = [];
    for (const { path, handle } of await listFiles(dir, "", [])) {
      const f = await handle.getFile();
      files.push({ name: path, data: new Uint8Array(await f.arrayBuffer()), mtime: Math.floor(f.lastModified / 1000) });
    }
    return { blob: zipWrite(files), count: files.length };
  },
  async importSaves({ game, file }) {
    const zip = await ZipReader.open(file);
    const root = await dirFor(game.id + "/profile");
    const store = opfsStore(root);
    let count = 0;
    for (const e of zip.entries()) {
      if (e.isDir || e.path.split("/").some((p) => p === "..")) continue;
      const w = await store.createWriter(e.path);
      const reader = (await zip.stream(e)).getReader();
      for (;;) {
        const { done, value } = await reader.read();
        if (done) break;
        await w.write(value);
      }
      await w.close();
      count++;
    }
    return { count };
  },
};

onmessage = async ({ data }) => {
  const { id, cmd } = data;
  try {
    const result = await handlers[cmd](data);
    postMessage({ id, result });
  } catch (e) {
    controller = null;
    postMessage({ id, error: String((e && e.message) || e) });
  }
};
