/* speed.exe 00863077 FUN_00863077; analysis pseudocode, not buildable source.
 * calls 00862eb8 FUN_00862eb8
 * calls 0081c131 FUN_0081c131
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00863077(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_009c2188 == '\0') {
    return -10;
  }
  iVar1 = FUN_0081c131(param_1);
  if (iVar1 == 0) {
    iVar2 = -8;
  }
  else {
    iVar2 = FUN_00862eb8(*(undefined4 *)(iVar1 + 4));
    if (iVar2 < 0) {
      iVar2 = (int)ROUND(*(float *)(iVar1 + 0x144) * _DAT_00896ab4);
    }
  }
  return iVar2;
}

