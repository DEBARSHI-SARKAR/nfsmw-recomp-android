/* speed.exe 007cb1d0 __dosmaperr; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 * calls 007cb280 FUN_007cb280
 */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  uint local_8;
  
  puVar1 = (ulong *)FUN_007cb280();
  *puVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_007cb270();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_007cb270();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_00906600 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)FUN_007cb270();
  *puVar2 = *(undefined4 *)(&DAT_00906604 + local_8 * 8);
  return;
}

