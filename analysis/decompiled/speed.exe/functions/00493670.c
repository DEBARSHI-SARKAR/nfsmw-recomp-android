/* speed.exe 00493670 FUN_00493670; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00493670(float *param_1,float *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[4];
  param_2[2] = param_1[8];
  param_2[4] = param_1[1];
  param_2[5] = param_1[5];
  param_2[6] = param_1[9];
  param_2[8] = param_1[2];
  param_2[9] = param_1[6];
  param_2[10] = param_1[10];
  param_2[0xc] = (-(param_1[0xc] * *param_1) - param_1[1] * param_1[0xd]) -
                 param_1[0xe] * param_1[2];
  param_2[0xd] = (-(param_1[0xc] * param_1[4]) - param_1[5] * param_1[0xd]) -
                 param_1[0xe] * param_1[6];
  param_2[0xe] = (-(param_1[0xc] * param_1[8]) - param_1[9] * param_1[0xd]) -
                 param_1[10] * param_1[0xe];
  return;
}

