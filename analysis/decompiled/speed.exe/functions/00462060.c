/* speed.exe 00462060 FUN_00462060; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00462060(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x160) < *(int *)(param_1 + 0x154)) &&
      (iVar1 = *(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x160) * 0xc, iVar1 != 0)) &&
     (*(char *)(iVar1 + 1) == '\0')) {
    return 1;
  }
  return 0;
}

