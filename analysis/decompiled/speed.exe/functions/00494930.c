/* speed.exe 00494930 FUN_00494930; analysis pseudocode, not buildable source.
 * calls 004948c0 FUN_004948c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00494930(ushort *param_1,float *param_2)

{
  *param_2 = (float)(*param_1 >> 1) * _DAT_008957c0 - _DAT_0089096c;
  param_2[1] = (float)param_1[1] * _DAT_008957bc - _DAT_0089096c;
  param_2[2] = (float)param_1[2] * _DAT_008957bc - _DAT_0089096c;
  FUN_004948c0((byte)*param_1 & 1,param_2);
  return;
}

