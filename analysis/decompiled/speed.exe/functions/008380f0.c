/* speed.exe 008380f0 FUN_008380f0; analysis pseudocode, not buildable source.
 * calls 00848240 FUN_00848240
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

void FUN_008380f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
  }
  iVar1 = FUN_00848240(*(undefined4 *)(param_1 + 8),param_2,FUN_00836a90,param_1,
                       *(undefined4 *)(param_1 + 0xb0));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}

