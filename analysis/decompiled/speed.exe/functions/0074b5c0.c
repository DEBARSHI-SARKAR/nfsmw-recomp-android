/* speed.exe 0074b5c0 FUN_0074b5c0; analysis pseudocode, not buildable source.
 * calls 0073d660 FUN_0073d660
 * calls 0073d560 FUN_0073d560
 */

int __thiscall FUN_0074b5c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0073d560(param_2,param_3);
    return *(int *)(*(int *)(param_1 + 8) + 0x1c) * iVar1 + *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = FUN_0073d660(param_2,param_3);
  }
  return *(int *)(*(int *)(param_1 + 8) + 0x1c) * iVar1 + *(int *)(param_1 + 0x14);
}

