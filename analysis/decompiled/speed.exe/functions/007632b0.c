/* speed.exe 007632b0 FUN_007632b0; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 */

void __thiscall FUN_007632b0(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = 0;
  if ((*(byte *)((int)param_1 + 0x12) & 3) == 0) {
    param_2[4] = 0;
    param_2[5] = 0x3f800000;
    param_2[6] = 0;
  }
  else {
    FUN_00444dc0(param_1 + 8,param_1,param_2 + 4);
  }
  param_2[7] = 0;
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = 0;
  if (param_3 != '\0') {
    param_2[0xc] = param_1[0xc];
    param_2[0xd] = param_1[0xd];
    param_2[0xe] = param_1[0xe];
    param_2[0xf] = 0x3f800000;
    return;
  }
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0x3f800000;
  return;
}

