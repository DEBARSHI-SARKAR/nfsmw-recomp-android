/* speed.exe 005b0d20 FUN_005b0d20; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005b0d20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4144) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x4144) + -1;
  *(int *)(param_1 + 0x4144) = iVar1;
  return iVar1 * 0x100 + 0x4148 + param_1;
}

