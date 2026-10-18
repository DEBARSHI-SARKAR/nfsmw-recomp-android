/* speed.exe 0056ab30 FUN_0056ab30; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 00465a70 FUN_00465a70
 * calls 00460ca0 FUN_00460ca0
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_0056ab30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = FUN_00465a70(0x100,0);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  FUN_00460ca0(*(undefined4 *)(param_1 + 0x30),param_2,0x100);
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x1e2640fa,*(undefined4 *)(param_1 + 0x3c));
    return;
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x1e2640fa,*(int *)(param_1 + 0x30));
  return;
}

