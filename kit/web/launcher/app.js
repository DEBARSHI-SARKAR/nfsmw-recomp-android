// app.js - the web launcher's hub page: one card per game in games.json,
// imports and saves through worker.js, Play when the game's web build exists.
import { humanBytes } from "./core.js";

const worker = new Worker(new URL("./worker.js", import.meta.url), { type: "module" });
let nextId = 1;
const pending = new Map();
let onProgress = null;
worker.onmessage = ({ data }) => {
  if (data.progress) {
    onProgress && onProgress(data.progress);
    return;
  }
  const p = pending.get(data.id);
  if (!p) return;
  pending.delete(data.id);
  data.error ? p.reject(new Error(data.error)) : p.resolve(data.result);
};
function call(cmd, args = {}) {
  const id = nextId++;
  return new Promise((resolve, reject) => {
    pending.set(id, { resolve, reject });
    worker.postMessage({ id, cmd, ...args });
  });
}

const cards = new Map();
let busy = false;

function setBusy(value) {
  busy = value;
  for (const c of cards.values())
    for (const b of c.el.querySelectorAll(".import-folder, .import-zip, .import-saves, .delete, .play"))
      b.disabled = value || (b.classList.contains("play") && c.state !== "ready") ||
                   (b.classList.contains("delete") && c.state === "notFound");
}

function show(card, text, bad = false) {
  card.message.hidden = !text;
  card.message.textContent = text || "";
  card.message.classList.toggle("bad", bad);
}

const STATES = {
  notFound: ["Not imported", "bad"],
  wrongVersion: ["Wrong version", "warn"],
  incomplete: ["Incomplete", "warn"],
  ready: ["Ready", "ready"],
};

async function refresh(card) {
  const { status, estimate, persisted } = await call("status", { game: card.game });
  card.state = status.state;
  const [label, tone] = STATES[status.state];
  card.stateEl.textContent = label;
  card.stateEl.className = "state " + tone;
  let detail = "";
  if (status.state === "ready") detail = `${status.files} files, ${humanBytes(status.bytes)} in this browser.`;
  else if (status.state === "notFound") detail = `Import the folder ${card.game.title} is installed in (it holds ${card.game.executable}), or a ZIP of it.`;
  else if (status.missing && status.missing.length) detail = `Missing folders: ${status.missing.join(", ")}. Import again.`;
  else detail = `The imported ${card.game.executable} is not the supported version. Import again from the supported release.`;
  card.detailEl.textContent = detail;
  card.el.querySelector(".store").hidden = !card.game.store || status.state === "ready";
  setBusy(busy);
  updateStorage(estimate, persisted);
}

function updateStorage(estimate, persisted) {
  const text = document.getElementById("storage-text");
  const note = document.getElementById("storage-note");
  const persist = document.getElementById("persist");
  if (estimate && estimate.quota) {
    text.textContent = `Storage: ${humanBytes(estimate.usage || 0)} used of ${humanBytes(estimate.quota)} available to this site.`;
  } else {
    text.textContent = "This browser does not report its storage.";
  }
  persist.hidden = !!persisted || !navigator.storage?.persist;
  note.textContent = persisted
    ? "The browser will keep game data until you delete it."
    : "The browser may clear game data when space runs low; choose Keep game data to prevent that.";
}

const RESULTS = {
  done: () => "Imported.",
  cancelled: () => "Import cancelled. Importing again continues where it stopped.",
  noExecutable: (r, g) => `The chosen files do not contain ${g.executable}. Choose the folder the game is installed in, or a ZIP of it.`,
  incomplete: (r) => `The chosen files are incomplete: missing ${r.missing.join(", ")}.`,
  wrongVersion: (r, g) => `This is not the supported version of ${g.title} (${g.executable} has SHA-256 ${r.digest}).`,
  noSpace: (r) => r.needed
    ? `Not enough storage: the import needs ${humanBytes(r.needed)} and ${humanBytes(Math.max(0, r.free))} is free. Free some space and import again; copied files are kept.`
    : "The browser ran out of storage. Free some space and import again; copied files are kept.",
  failed: (r) => `The import failed: ${r.error}`,
};

async function runImport(card, args) {
  if (busy) return;
  setBusy(true);
  show(card, "");
  const progress = card.el.querySelector(".progress");
  const bar = progress.querySelector("progress");
  const ptext = progress.querySelector(".progress-text");
  const cancel = card.el.querySelector(".cancel");
  progress.hidden = false;
  cancel.hidden = false;
  bar.value = 0;
  ptext.textContent = "Reading the chosen files…";
  onProgress = (p) => {
    bar.value = p.bytesTotal ? p.bytesDone / p.bytesTotal : 0;
    ptext.textContent = `${p.filesDone} / ${p.filesTotal} files, ${humanBytes(p.bytesDone)} of ${humanBytes(p.bytesTotal)} — ${p.current}`;
  };
  try {
    const result = await call("import", { game: card.game, ...args });
    const text = RESULTS[result.result](result, card.game);
    show(card, text, result.result !== "done");
  } catch (e) {
    show(card, "The import failed: " + e.message, true);
  } finally {
    onProgress = null;
    progress.hidden = true;
    cancel.hidden = true;
    setBusy(false);
    await refresh(card);
  }
}

// Collect [{path, file}] from dropped folders and files.
async function droppedFiles(items) {
  const out = [];
  const readAll = (reader) => new Promise((resolve, reject) => {
    const all = [];
    const next = () => reader.readEntries((batch) => (batch.length ? (all.push(...batch), next()) : resolve(all)), reject);
    next();
  });
  const walk = async (entry, prefix) => {
    const path = prefix ? prefix + "/" + entry.name : entry.name;
    if (entry.isFile) {
      const file = await new Promise((res, rej) => entry.file(res, rej));
      out.push({ path, file });
    } else if (entry.isDirectory) {
      for (const child of await readAll(entry.createReader())) await walk(child, path);
    }
  };
  const entries = [...items].map((i) => i.webkitGetAsEntry && i.webkitGetAsEntry()).filter(Boolean);
  for (const e of entries) await walk(e, "");
  return out;
}

function pickFiles(input) {
  return new Promise((resolve) => {
    input.value = "";
    input.onchange = () => resolve([...input.files]);
    input.click();
  });
}

function addCard(game) {
  const el = document.getElementById("game-card").content.firstElementChild.cloneNode(true);
  const card = { game, el, state: "notFound", stateEl: el.querySelector(".state"),
                 detailEl: el.querySelector(".detail"), message: el.querySelector(".message") };
  el.querySelector("h2").textContent = game.title;
  const store = el.querySelector(".store");
  if (game.store) store.href = game.store;

  el.querySelector(".play").onclick = async () => {
    const url = new URL(`${game.id}/`, location.href);
    const found = await fetch(new URL("index.html", url), { method: "HEAD" }).then((r) => r.ok).catch(() => false);
    if (found) location.href = url.href;
    else show(card, `The web version of ${game.title} is not available here yet. The imported game is kept for it.`);
  };
  el.querySelector(".import-folder").onclick = async () => {
    if (window.showDirectoryPicker) {
      let handle;
      try {
        handle = await window.showDirectoryPicker({ id: "game-" + game.id, mode: "read" });
      } catch {
        return; // cancelled
      }
      runImport(card, { kind: "handle", handle });
      return;
    }
    const files = await pickFiles(document.getElementById("folder-input"));
    if (files.length)
      runImport(card, { kind: "files", files: files.map((file) => ({ path: file.webkitRelativePath || file.name, file })) });
  };
  el.querySelector(".import-zip").onclick = async () => {
    const [file] = await pickFiles(document.getElementById("zip-input"));
    if (file) runImport(card, { kind: "zip", file });
  };
  el.querySelector(".cancel").onclick = () => call("cancel");
  let confirmDelete = false;
  const del = el.querySelector(".delete");
  del.onclick = async () => {
    if (!confirmDelete) {
      confirmDelete = true;
      del.textContent = "Delete game data — click again";
      setTimeout(() => { confirmDelete = false; del.textContent = "Delete game data"; }, 5000);
      return;
    }
    confirmDelete = false;
    del.textContent = "Delete game data";
    await call("delete", { game });
    show(card, "Game data deleted. Saves are kept.");
    await refresh(card);
  };
  el.querySelector(".export-saves").onclick = async () => {
    const { blob, count } = await call("exportSaves", { game });
    if (!count) {
      show(card, "There are no saves to export yet.");
      return;
    }
    const a = document.createElement("a");
    a.href = URL.createObjectURL(blob);
    a.download = `${game.title} saves.zip`;
    a.click();
    setTimeout(() => URL.revokeObjectURL(a.href), 10000);
    show(card, `Exported ${count} file${count === 1 ? "" : "s"}.`);
  };
  el.querySelector(".import-saves").onclick = async () => {
    const [file] = await pickFiles(document.getElementById("zip-input"));
    if (!file) return;
    try {
      const { count } = await call("importSaves", { game, file });
      show(card, `Imported ${count} save file${count === 1 ? "" : "s"}.`);
    } catch (e) {
      show(card, "Could not import saves: " + e.message, true);
    }
  };
  el.addEventListener("dragover", (e) => { e.preventDefault(); el.classList.add("drag"); });
  el.addEventListener("dragleave", () => el.classList.remove("drag"));
  el.addEventListener("drop", async (e) => {
    e.preventDefault();
    el.classList.remove("drag");
    if (busy) return;
    const items = e.dataTransfer.items;
    const single = e.dataTransfer.files.length === 1 && /\.zip$/i.test(e.dataTransfer.files[0].name);
    if (single && !(items[0].webkitGetAsEntry && items[0].webkitGetAsEntry()?.isDirectory)) {
      runImport(card, { kind: "zip", file: e.dataTransfer.files[0] });
      return;
    }
    const files = await droppedFiles(items);
    if (files.length) runImport(card, { kind: "files", files });
  });
  document.getElementById("games").append(el);
  cards.set(game.id, card);
  return card;
}

document.getElementById("persist").onclick = async () => {
  await navigator.storage.persist();
  const first = cards.values().next().value;
  if (first) await refresh(first);
};

const games = await fetch("games.json").then((r) => r.json());
for (const game of games) addCard(game);
await Promise.all([...cards.values()].map(refresh));

// For automated checks: import files the page already has.
window.recompLauncher = {
  importFiles: (id, files) => runImport(cards.get(id), { kind: "files", files }),
  importZip: (id, file) => runImport(cards.get(id), { kind: "zip", file }),
  status: (id) => call("status", { game: cards.get(id).game }),
  message: (id) => cards.get(id).message.textContent,
};
