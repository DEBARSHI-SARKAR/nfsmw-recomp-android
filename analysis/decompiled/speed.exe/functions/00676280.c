/* speed.exe 00676280 FUN_00676280; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00676280(int param_1,int param_2,int param_3,float param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  float local_8;
  float local_4;
  
  pfVar2 = *(float **)(param_1 + 0xc);
  local_8 = 0.0;
  local_4 = 0.0;
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
LAB_006762af:
    if (pfVar2 != (float *)0x0) {
      local_8 = *pfVar2;
    }
  }
  else if (param_3 == 0) goto LAB_006762af;
  pfVar2 = *(float **)(param_2 + 0xc);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) goto LAB_006762da;
  if (pfVar2 != (float *)0x0) {
    local_4 = *pfVar2;
  }
LAB_006762da:
  fVar1 = _DAT_0089096c - param_4;
  pfVar2 = *(float **)(param_5 + 0xc);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_00454c30(param_3);
  }
  else if (param_3 != 0) {
    return;
  }
  if (pfVar2 != (float *)0x0) {
    *pfVar2 = local_4 * param_4 + fVar1 * local_8;
  }
  return;
}

