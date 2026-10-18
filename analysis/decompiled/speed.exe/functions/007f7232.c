/* speed.exe 007f7232 FUN_007f7232; analysis pseudocode, not buildable source.
 * calls 007f5df7 FUN_007f5df7
 */

undefined4 * __thiscall FUN_007f7232(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_008c2580;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_1[5] = 0;
  param_1[6] = 1;
  (**(code **)(*(int *)param_1[1] + 8))();
  (**(code **)(*(int *)param_1[3] + 4))();
  (**(code **)(*(int *)param_1[2] + 4))();
  FUN_007f5df7(param_1[4]);
  uVar1 = (*(code *)**(undefined4 **)param_1[3])();
  param_1[5] = uVar1;
  return param_1;
}

