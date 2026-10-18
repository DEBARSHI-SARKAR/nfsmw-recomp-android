/* speed.exe 007e14a0 ___free_lc_time; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    __free_dbg(param_1[1],2);
    __free_dbg(param_1[2],2);
    __free_dbg(param_1[3],2);
    __free_dbg(param_1[4],2);
    __free_dbg(param_1[5],2);
    __free_dbg(param_1[6],2);
    __free_dbg(*param_1,2);
    __free_dbg(param_1[8],2);
    __free_dbg(param_1[9],2);
    __free_dbg(param_1[10],2);
    __free_dbg(param_1[0xb],2);
    __free_dbg(param_1[0xc],2);
    __free_dbg(param_1[0xd],2);
    __free_dbg(param_1[7],2);
    __free_dbg(param_1[0xe],2);
    __free_dbg(param_1[0xf],2);
    __free_dbg(param_1[0x10],2);
    __free_dbg(param_1[0x11],2);
    __free_dbg(param_1[0x12],2);
    __free_dbg(param_1[0x13],2);
    __free_dbg(param_1[0x14],2);
    __free_dbg(param_1[0x15],2);
    __free_dbg(param_1[0x16],2);
    __free_dbg(param_1[0x17],2);
    __free_dbg(param_1[0x18],2);
    __free_dbg(param_1[0x19],2);
    __free_dbg(param_1[0x1a],2);
    __free_dbg(param_1[0x1b],2);
    __free_dbg(param_1[0x1c],2);
    __free_dbg(param_1[0x1d],2);
    __free_dbg(param_1[0x1e],2);
    __free_dbg(param_1[0x1f],2);
    __free_dbg(param_1[0x20],2);
    __free_dbg(param_1[0x21],2);
    __free_dbg(param_1[0x22],2);
    __free_dbg(param_1[0x23],2);
    __free_dbg(param_1[0x24],2);
    __free_dbg(param_1[0x25],2);
    __free_dbg(param_1[0x26],2);
    __free_dbg(param_1[0x27],2);
    __free_dbg(param_1[0x28],2);
    __free_dbg(param_1[0x29],2);
    __free_dbg(param_1[0x2a],2);
  }
  return;
}

