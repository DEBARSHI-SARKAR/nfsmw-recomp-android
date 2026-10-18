/* speed.exe 00494d10 FUN_00494d10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00494d10(byte *param_1,int param_2,float *param_3)

{
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    *param_3 = (float)(*param_1 >> 4) * *(float *)(param_2 + 0x10) * _DAT_00895504 +
               *(float *)(param_2 + 8);
  }
  else if (*(char *)(param_2 + 0x18) == '\x01') {
    param_3[1] = (float)(*param_1 >> 4) * *(float *)(param_2 + 0x10) * _DAT_00895504 +
                 *(float *)(param_2 + 8);
  }
  else {
    param_3[2] = (float)(*param_1 >> 4) * *(float *)(param_2 + 0x10) * _DAT_00895504 +
                 *(float *)(param_2 + 8);
  }
  param_3[3] = (float)(*param_1 & 0xf) * *(float *)(param_2 + 0x14) * _DAT_00895504 +
               *(float *)(param_2 + 0xc);
  return;
}

