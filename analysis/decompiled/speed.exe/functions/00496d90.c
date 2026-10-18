/* speed.exe 00496d90 FUN_00496d90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00496d90(ushort *param_1,float *param_2)

{
  *param_2 = (float)(*param_1 >> 4) * _DAT_00895518 - _DAT_0089096c;
  param_2[1] = (float)(param_1[1] >> 4) * _DAT_00895518 - _DAT_0089096c;
  param_2[2] = (float)(param_1[2] >> 4) * _DAT_00895518 - _DAT_0089096c;
  param_2[3] = (float)((((byte)*param_1 & 0xf) * 0x10 + ((byte)param_1[1] & 0xf)) * 0x10 +
                      ((byte)param_1[2] & 0xf)) * _DAT_00895518 - _DAT_0089096c;
  return;
}

