/* speed.exe 007535e0 FUN_007535e0; analysis pseudocode, not buildable source.
 * calls 0074d0d0 FUN_0074d0d0
 * calls 00460c20 FUN_00460c20
 * calls 00749a00 FUN_00749a00
 */

void FUN_007535e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x150) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0074d0d0();
    uVar3 = FUN_00460c20("_WHEEL",uVar3);
  }
  if (*(int *)(param_1 + 0x150) == 0) {
    FUN_00749a00(param_1,uVar1,uVar3,0,0x4e);
    return;
  }
  uVar2 = FUN_0074d0d0();
  uVar2 = FUN_00460c20("_WHEEL_INNER_MASK",uVar2);
  FUN_00749a00(param_1,uVar1,uVar3,uVar2,0x4e);
  return;
}

