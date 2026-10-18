#!/usr/bin/env python3
"""Copy exactly the validated manifest into the local app resource directory."""
import json
import hashlib
import re
import shutil
import sys
from pathlib import Path

source, target = map(Path, sys.argv[1:])
manifest = json.loads((source / 'manifest.json').read_text())
files = ['manifest.json', 'preload.txt']
detail = manifest.get('terrain_detail')
if detail:
    if detail['file'] != 'terrain-detail.popt':
        raise ValueError('invalid terrain detail filename')
    asset = source / detail['file']
    if asset.stat().st_size != detail['bytes'] or hashlib.sha256(asset.read_bytes()).hexdigest() != detail['sha256']:
        raise ValueError('terrain detail differs from its manifest')
    files.append(detail['file'])
for item in manifest['textures']:
    if not re.fullmatch('[0-9a-f]{16}', item['hash']):
        raise ValueError('invalid texture hash')
    asset = source / (item['hash'] + '.popt')
    if asset.stat().st_size != item['bytes'] or hashlib.sha256(asset.read_bytes()).hexdigest() != item['sha256']:
        raise ValueError('pack asset differs from its manifest: ' + item['hash'])
    files.append(item['hash'] + '.popt')
# Validate every input before changing the generated resource directory.
for name in files:
    if not (source / name).is_file():
        raise ValueError('missing pack file: ' + name)
target.mkdir(parents=True, exist_ok=True)
for name in files:
    shutil.copy2(source / name, target / name)
# Remove only stale generated textures; leave unrelated local files alone.
for old in target.glob('*.popt'):
    if old.name not in files:
        old.unlink()
print(f'packaged {len(manifest["textures"])} replacements and {int(bool(detail))} terrain detail resource into {target}')
