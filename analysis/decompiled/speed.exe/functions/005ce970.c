/* speed.exe 005ce970 FUN_005ce970; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005ce970(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    iVar1 = iVar1 * 0x10 + param_1;
  }
  return ((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 + iVar1;
}

