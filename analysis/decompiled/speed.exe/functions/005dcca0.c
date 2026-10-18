/* speed.exe 005dcca0 FUN_005dcca0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

void FUN_005dcca0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  pfVar3 = (float *)FUN_00454810(0x9f743a0e,0);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_006269b0(0xc);
  }
  fVar1 = pfVar3[2];
  fVar2 = *pfVar3;
  *param_2 = -pfVar3[1];
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  return;
}

