/* speed.exe 00494bc0 FUN_00494bc0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00494bc0(ushort *param_1,float *param_2)

{
  param_2[2] = (float)param_1[2] * _DAT_008957bc - _DAT_0089096c;
  param_2[3] = (float)param_1[3] * _DAT_008957bc - _DAT_0089096c;
  param_2[4] = (float)param_1[4] * _DAT_008957bc;
  param_2[5] = (float)param_1[5] * _DAT_008957bc;
  *(char *)(param_2 + 6) = (char)param_1[6];
  *param_2 = (float)*param_1 * _DAT_009117fc * _DAT_00895500 - _DAT_00895444;
  param_2[1] = (float)param_1[1] * _DAT_009117fc * _DAT_00895500 - _DAT_00895444;
  return;
}

