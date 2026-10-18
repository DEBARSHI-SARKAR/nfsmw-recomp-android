/* speed.exe 005bb4a0 FUN_005bb4a0; analysis pseudocode, not buildable source.
 * calls 005bb370 FUN_005bb370
 */

int __thiscall FUN_005bb4a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_005bb370(iVar1 + 1);
  *(undefined4 *)(iVar1 * 0xc + *(int *)(param_1 + 0x14)) = param_2;
  *(undefined4 *)(iVar1 * 0xc + 4 + *(int *)(param_1 + 0x14)) = param_3;
  return iVar1;
}

