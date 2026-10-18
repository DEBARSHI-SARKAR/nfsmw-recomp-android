/* speed.exe 00672bc0 FUN_00672bc0; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00672bc0(int param_1,int param_2,int param_3,float param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar2 = *(float **)(param_1 + 0xc);
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
LAB_00672bff:
    if (pfVar2 != (float *)0x0) {
      local_18 = *pfVar2;
      local_14 = pfVar2[1];
    }
  }
  else if (param_3 == 0) goto LAB_00672bff;
  pfVar2 = *(float **)(param_2 + 0xc);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) goto LAB_00672c38;
  if (pfVar2 != (float *)0x0) {
    local_10 = *pfVar2;
    local_c = pfVar2[1];
  }
LAB_00672c38:
  fVar1 = _DAT_0089096c - param_4;
  pfVar2 = *(float **)(param_5 + 0xc);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) {
    return;
  }
  if (pfVar2 != (float *)0x0) {
    *pfVar2 = local_10 * param_4 + local_18 * fVar1;
    pfVar2[1] = local_c * param_4 + fVar1 * local_14;
  }
  return;
}

