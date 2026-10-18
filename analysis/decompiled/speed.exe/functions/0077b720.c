/* speed.exe 0077b720 FUN_0077b720; analysis pseudocode, not buildable source.
 * calls 0076e0d0 FUN_0076e0d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077b720(ushort *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_2 <= _DAT_0089096c) {
    if (param_2 < _DAT_00890968) {
      param_2 = 0.0;
    }
  }
  else {
    param_2 = 1.0;
  }
  pfVar1 = (float *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  pfVar2 = (float *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  local_c = *pfVar1;
  local_8 = pfVar1[1];
  local_4 = pfVar1[2];
  local_18 = *pfVar2;
  local_14 = pfVar2[1];
  local_10 = pfVar2[2];
  if ((*(byte *)((int)param_1 + 0xb) & 1) != 0) {
    FUN_0076e0d0(&local_c,&local_18,param_1,param_2,param_3);
    return;
  }
  *param_3 = (local_18 - local_c) * param_2 + local_c;
  param_3[1] = (local_14 - local_8) * param_2 + local_8;
  param_3[2] = (local_10 - local_4) * param_2 + local_4;
  return;
}

