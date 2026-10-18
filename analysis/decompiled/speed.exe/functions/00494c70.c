/* speed.exe 00494c70 FUN_00494c70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00494c70(byte *param_1,int param_2,float *param_3)

{
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  if (param_2 == 0) {
    *param_3 = (float)*param_1 * _DAT_008957c4 - _DAT_0089096c;
  }
  else if (param_2 == 1) {
    param_3[1] = (float)*param_1 * _DAT_008957c4 - _DAT_0089096c;
  }
  else {
    param_3[2] = (float)*param_1 * _DAT_008957c4 - _DAT_0089096c;
  }
  param_3[3] = (float)param_1[1] * _DAT_008957c4 - _DAT_0089096c;
  return;
}

