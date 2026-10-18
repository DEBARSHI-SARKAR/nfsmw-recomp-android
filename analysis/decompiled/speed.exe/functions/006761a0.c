/* speed.exe 006761a0 FUN_006761a0; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 */

void FUN_006761a0(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float local_4;
  
  pfVar1 = *(float **)(param_1 + 0xc);
  local_4 = 0.0;
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_00454c30(param_2);
  }
  else if (param_2 != 0) goto LAB_006761d2;
  if (pfVar1 != (float *)0x0) {
    local_4 = *pfVar1;
  }
LAB_006761d2:
  pfVar1 = *(float **)(param_1 + 0xc);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_00454c30(param_2);
  }
  else if (param_2 != 0) {
    return;
  }
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = local_4 * param_3;
  }
  return;
}

