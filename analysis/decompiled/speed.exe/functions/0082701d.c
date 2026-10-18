/* speed.exe 0082701d FUN_0082701d; analysis pseudocode, not buildable source.
 * calls 00828af7 FUN_00828af7
 * calls 00828b03 FUN_00828b03
 * calls 00828ed3 FUN_00828ed3
 */

void FUN_0082701d(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = FUN_00826e6d;
  param_1[1] = &LAB_0082700a;
  uVar2 = param_2[1];
  param_1[8] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = param_2[9];
  param_1[9] = param_2[4];
  param_1[10] = param_2[5];
  iVar1 = FUN_00828af7(0xa8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00828ed3();
  }
  param_1[7] = uVar2;
  param_2[10] = &LAB_00827002;
  if ((int)param_1[0xc] < 2) {
    param_1[0xd] = *param_2;
    uVar2 = param_2[3];
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xe] = uVar2;
    param_1[0x11] = param_2[4];
    param_1[0x12] = param_2[5];
  }
  else {
    FUN_00828b03(*param_2,param_1[9] << 2,param_1[9]);
  }
  return;
}

