/* speed.exe 00464850 FUN_00464850; analysis pseudocode, not buildable source.
 * calls 00464510 FUN_00464510
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_00464850(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  FUN_007ec1bd();
  FUN_00464510(param_2,param_3,param_4);
  param_3 = *(int *)(param_1 + 0x30) - param_3;
  *(int *)(param_1 + 0x30) = param_3;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x2c) - param_3;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  FUN_007ec1c8();
  return;
}

