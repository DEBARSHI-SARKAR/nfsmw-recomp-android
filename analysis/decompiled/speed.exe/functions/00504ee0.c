/* speed.exe 00504ee0 FUN_00504ee0; analysis pseudocode, not buildable source.
 * calls 005018f0 FUN_005018f0
 * calls 005014c0 FUN_005014c0
 */

void __thiscall FUN_00504ee0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_005018f0(*(int *)(param_1 + 8),param_2);
    FUN_005014c0(uVar1);
  }
  return;
}

