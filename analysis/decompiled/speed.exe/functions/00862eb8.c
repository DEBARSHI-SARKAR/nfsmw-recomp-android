/* speed.exe 00862eb8 FUN_00862eb8; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00862eb8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_009c2188 == '\0') {
    iVar1 = -10;
  }
  else {
    iVar1 = FUN_0081f7cb(param_2,param_1,param_1);
    if (-1 < iVar1) {
      return (int)ROUND(*(float *)(iVar1 * 0x90 + 0x38 + DAT_009c21f4) * _DAT_00896ab4);
    }
    iVar1 = -8;
  }
  return iVar1;
}

