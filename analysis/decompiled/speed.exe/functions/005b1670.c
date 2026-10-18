/* speed.exe 005b1670 FUN_005b1670; analysis pseudocode, not buildable source.
 * calls 005c17e0 FUN_005c17e0
 */

void FUN_005b1670(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 100); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_005c17e0(iVar1,param_2);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | *(uint *)(param_1 + 0x1c) & 0x3c00000;
  }
  return;
}

