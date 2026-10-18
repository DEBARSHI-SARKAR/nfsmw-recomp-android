#!/usr/bin/env python3
"""Measure real-clock gameplay throughput offscreen; never claim displayed FPS."""
import argparse,csv,hashlib,json,os,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--game-dir',type=Path,default=os.environ.get('RECOMP_GAME_DIR'),required='RECOMP_GAME_DIR' not in os.environ,help='the directory holding game.toml and smoke/ (default $RECOMP_GAME_DIR)')
    p.add_argument('--binary',type=Path,default=None,help='default <game>/build/recomp/pop_smoke')
    p.add_argument('--core',type=Path,default=None,help='default <game>/build/recomp/mods/core')
    p.add_argument('--size',default='3840x2160')
    p.add_argument('--submit-draws',type=int,default=256,help='Early GPU submission interval for native scenes; 0 disables')
    p.add_argument('--readback-timings',action='store_true',help='Diagnostic GPU/readback timing CSV; excludes this run from unprofiled comparisons')
    p.add_argument('--readback-counters',action='store_true',help='Diagnostic Apple GPU stage counters; implies --readback-timings and splits compute encoders')
    p.add_argument('--readback-workers',type=int,choices=range(1,5),default=4,help='Maximum native readback conversion jobs')
    p.add_argument('--readback-kernel',choices=('fused','tiled'),default='fused',help='GPU readback implementation')
    p.add_argument('--out',type=Path,required=True)
    a=p.parse_args()
    if not 0<=a.submit_draws<=65536:p.error('--submit-draws must be between 0 and 65536')
    if a.readback_counters:a.readback_timings=True
    o=a.out.resolve();o.mkdir(parents=True,exist_ok=False)
    for n in ('profile','user-mods'): (o/n).mkdir()
    (o/'profile/mod-settings.json').write_text(json.dumps({'host.display/rendering':0,'host.display/wide_view':1,'host.display/frame_limit':3,'host.display/performance_overlay':0}))
    a.binary=a.binary or a.game_dir/'build/recomp/pop_smoke'
    a.core=a.core or a.game_dir/'build/recomp/mods/core'
    script=(a.game_dir/'smoke/gate-c.script').read_text().split('# Let the selected shaman finish')[0]
    script='\n'.join(l for l in script.splitlines() if not l.startswith(('dump','simdump','peek','watch','#')))
    script=script.replace('camera 5386 55651','camera 5386 55651\nwatch 0 1')
    script+='\nwait 30000\nexpect draws>0\nexpect watch_selected>0\nexpect watch_moved>256\nquit\n'
    (o/'input.script').write_text(script)
    env=os.environ.copy()
    for k in ('RECOMP_PIN_CLOCK','RECOMP_PIN_CLOCK','RECOMP_NO_MODS','RECOMP_PROFILE','RECOMP_HOST_READBACK_TIMINGS','RECOMP_HOST_READBACK_COUNTERS'):env.pop(k,None)
    # Record plugin identity too: core-only optimizations reuse the host binary.
    core_hashes={str(f.relative_to(a.core)):hashlib.sha256(f.read_bytes()).hexdigest()
                 for f in sorted(a.core.rglob('*')) if f.is_file()}
    env.update(RECOMP_SMOKE_DRAWABLE=a.size,RECOMP_SMOKE_WINDOW_INPUT='1',RECOMP_SCRIPT=str(o/'input.script'),RECOMP_CORE_MODS_DIR=str(a.core.resolve()),RECOMP_MODS_DIR=str(o/'user-mods'),RECOMP_PROFILE_DIR=str(o/'profile'),RECOMP_RUN_RECORD=str(o/'run.json'),RECOMP_FRAME_TIMINGS=str(o/'frames.csv'))
    env['RECOMP_HOST_D3D_SUBMIT_DRAWS']=str(max(0,a.submit_draws))
    env['RECOMP_HOST_READBACK_WORKERS']=str(a.readback_workers)
    env['RECOMP_HOST_READBACK_KERNEL']=a.readback_kernel
    if a.readback_timings:env['RECOMP_HOST_READBACK_TIMINGS']=str(o/'readback.csv')
    if a.readback_counters:env['RECOMP_HOST_READBACK_COUNTERS']='1'
    with (o/'smoke.log').open('w') as f:
        child=subprocess.Popen([str(a.binary.resolve())],cwd=ROOT,env=env,stdout=f,stderr=subprocess.STDOUT)
        (o/'pid').write_text(str(child.pid));print('PID',child.pid,flush=True)
        try:code=child.wait(timeout=210)
        except subprocess.TimeoutExpired:
            child.terminate()
            try: child.wait(timeout=15)
            except subprocess.TimeoutExpired: child.kill();child.wait()
            code=124
    result=dict(exit=code,drawable=a.size,clock='real',limit=120,profile=a.readback_timings,stage_counters=a.readback_counters,displayed_fps_verified=False,renderer_submit_draws=a.submit_draws,readback_workers=a.readback_workers,readback_kernel=a.readback_kernel,binary_sha256=hashlib.sha256(a.binary.read_bytes()).hexdigest(),core_sha256=core_hashes)
    if code==0 and (o/'frames.csv').exists():
        rows=[r for r in csv.DictReader((o/'frames.csv').open()) if r['screen_class']=='2' and r['repeat']=='0']
        if rows:
            end=float(rows[-1]['presented_s']);rows=[r for r in rows if float(r['presented_s'])>=end-20]
            ts=[float(r['presented_s']) for r in rows]
            dt=sorted(1000*(b-a) for a,b in zip(ts,ts[1:]))
            if dt:
                result.update(completed_fps=(len(ts)-1)/(ts[-1]-ts[0]),median_ms=dt[len(dt)//2],p95_ms=dt[min(len(dt)-1,int(len(dt)*.95))],frames=len(ts),window_seconds=ts[-1]-ts[0],drops_delta=int(rows[-1]['drops'])-int(rows[0]['drops']))
    (o/'result.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result,indent=2));return code
if __name__=='__main__':raise SystemExit(main())
