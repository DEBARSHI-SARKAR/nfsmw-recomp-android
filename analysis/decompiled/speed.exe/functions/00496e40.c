/* speed.exe 00496e40 FUN_00496e40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00496e40(byte *param_1,float *param_2,float *param_3)

{
  *param_3 = (float)(*param_1 >> 2) * param_2[4] * _DAT_00895510 + *param_2;
  param_3[1] = (float)(param_1[1] >> 2) * param_2[5] * _DAT_00895510 + param_2[1];
  param_3[2] = (float)(param_1[2] >> 2) * param_2[6] * _DAT_00895510 + param_2[2];
  param_3[3] = (float)(byte)(((*param_1 & 3) * '\x04' + (param_1[1] & 3)) * '\x04' +
                            (param_1[2] & 3)) * param_2[7] * _DAT_00895510 + param_2[3];
  return;
}

