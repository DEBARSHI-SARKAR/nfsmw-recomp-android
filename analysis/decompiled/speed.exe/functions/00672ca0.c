/* speed.exe 00672ca0 FUN_00672ca0; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 */

void FUN_00672ca0(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float local_10;
  float local_c;
  
  pfVar1 = *(float **)(param_1 + 0xc);
  local_10 = 0.0;
  local_c = 0.0;
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_00454c30(param_2);
  }
  else if (param_2 != 0) goto LAB_00672ce3;
  if (pfVar1 != (float *)0x0) {
    local_10 = *pfVar1;
    local_c = pfVar1[1];
  }
LAB_00672ce3:
  pfVar1 = *(float **)(param_1 + 0xc);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_00454c30(param_2);
  }
  else if (param_2 != 0) {
    return;
  }
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = local_10 * param_3;
    pfVar1[1] = local_c * param_3;
  }
  return;
}

