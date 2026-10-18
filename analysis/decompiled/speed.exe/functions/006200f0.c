/* speed.exe 006200f0 FUN_006200f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006200f0(float *param_1,float *param_2,char param_3,char param_4)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = 0.0;
  if (((uint)param_1[4] & 0x100000) == 0) {
    param_2[4] = 0.0;
    param_2[5] = 1.0;
    param_2[6] = 0.0;
  }
  else {
    param_2[4] = param_1[9] * param_1[2] - param_1[10] * param_1[1];
    param_2[5] = param_1[10] * *param_1 - param_1[8] * param_1[2];
    param_2[6] = param_1[1] * param_1[8] - param_1[9] * *param_1;
  }
  param_2[7] = 0.0;
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = 0.0;
  if (param_3 == '\0') {
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 1.0;
  }
  else {
    param_2[0xc] = param_1[0xc];
    param_2[0xd] = param_1[0xd];
    param_2[0xe] = param_1[0xe];
    param_2[0xf] = 1.0;
    if (param_4 != '\0') {
      param_2[0xc] = param_2[0xc] - param_1[5] * param_2[4] * _DAT_008933d4;
      param_2[0xd] = param_2[0xd] - param_1[5] * param_2[5] * _DAT_008933d4;
      param_2[0xe] = param_2[0xe] - param_2[6] * param_1[5] * _DAT_008933d4;
      return;
    }
  }
  return;
}

