/* speed.exe 00827122 FUN_00827122; analysis pseudocode, not buildable source.
 * calls 00828af7 FUN_00828af7
 * calls 00828b03 FUN_00828b03
 * calls 00828ed3 FUN_00828ed3
 */

void FUN_00827122(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = FUN_008270b0;
  param_1[1] = &LAB_0082710f;
  param_1[8] = *param_2;
  uVar2 = param_2[3];
  param_1[10] = 0;
  param_1[9] = uVar2;
  iVar1 = FUN_00828af7(0xa8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828ed3();
  }
  param_1[7] = uVar2;
  param_2[10] = &LAB_00827107;
  FUN_00828b03(param_1[8],param_1[9] << 2,param_1[9]);
  return;
}

