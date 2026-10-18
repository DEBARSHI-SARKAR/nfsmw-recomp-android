/* speed.exe 00824f3a FUN_00824f3a; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00824f3a(int param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = ((float)*param_2 + (float)*param_2) / (float)param_2[1];
  *(float *)(param_1 + 0x24) = fVar1;
  *(float *)(param_1 + 0x20) = 1.0 - fVar1;
  fVar1 = _DAT_008ae820;
  *(float *)(param_1 + 0x24) = (float)param_2[2] * *(float *)(param_1 + 0x24) * _DAT_008ae820;
  *(float *)(param_1 + 0x20) = (float)param_2[2] * *(float *)(param_1 + 0x20) * fVar1;
  return;
}

