/* speed.exe 00472340 FUN_00472340; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00472340(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[2] - *param_1;
  param_1[6] = param_1[1];
  param_1[7] = *param_1;
  param_1[4] = (param_1[1] + param_1[3]) - (fVar1 + fVar1);
  param_1[5] = (fVar1 * _DAT_008945ec - param_1[3]) - (param_1[1] + param_1[1]);
  fVar1 = param_1[0xd] - param_1[0xb];
  param_1[0x11] = param_1[0xc];
  param_1[0x12] = param_1[0xb];
  param_1[0xf] = (param_1[0xc] + param_1[0xe]) - (fVar1 + fVar1);
  param_1[0x10] = (fVar1 * _DAT_008945ec - param_1[0xe]) - (param_1[0xc] + param_1[0xc]);
  fVar1 = param_1[0x18] - param_1[0x16];
  param_1[0x1c] = param_1[0x17];
  param_1[0x1d] = param_1[0x16];
  param_1[0x1a] = (param_1[0x17] + param_1[0x19]) - (fVar1 + fVar1);
  param_1[0x1b] = (fVar1 * _DAT_008945ec - param_1[0x19]) - (param_1[0x17] + param_1[0x17]);
  return;
}

