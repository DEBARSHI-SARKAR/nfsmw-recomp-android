/* speed.exe 005bb4e0 FUN_005bb4e0; analysis pseudocode, not buildable source.
 * calls 005bb370 FUN_005bb370
 * calls 005b6df0 FUN_005b6df0
 */

int __thiscall FUN_005bb4e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_005bb370(iVar1 + 1);
  *(undefined4 *)(iVar1 * 0xc + *(int *)(param_1 + 0x14)) = param_2;
  FUN_005b6df0(param_3);
  return iVar1;
}

