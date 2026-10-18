/* speed.exe 008258d1 FUN_008258d1; analysis pseudocode, not buildable source.
 * calls 00826838 FUN_00826838
 * calls 008244ac FUN_008244ac
 * calls 00822476 FUN_00822476
 */

undefined4 FUN_008258d1(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *param_1 = FUN_008257d1;
  param_1[1] = &LAB_008258ab;
  if (param_3 < 0) {
    param_1[8] = 0xffffffff;
  }
  else {
    uVar1 = FUN_00822476(param_3);
    uVar1 = FUN_00826838(uVar1);
    param_1[8] = uVar1;
  }
  param_1[9] = 0x3f800000;
  param_1[7] = param_2 + 6;
  param_1[10] = 0;
  param_1[0xb] = (uint)*(byte *)(param_2 + 1) << 1;
  uVar1 = FUN_008244ac(param_2 + 2,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x60a] = 0;
  param_1[0x60b] = 0;
  param_1[0xc] = uVar1;
  param_1[0x60c] = 0x10bc;
  return 0;
}

