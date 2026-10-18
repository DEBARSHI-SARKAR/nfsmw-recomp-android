/* speed.exe 0064c270 FUN_0064c270; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0064bdf0 FUN_0064bdf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0064c270(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  
  bVar3 = FUN_007c4b80();
  if (((~bVar3 & 1) == 0) || (param_1[4] == 0.0)) {
    fVar4 = (float10)_DAT_00890968;
  }
  else {
    fVar4 = (float10)FUN_0064bdf0(param_1[5]);
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *param_2 = (float)(fVar4 * (float10)*param_1);
  param_2[1] = (float)((float10)fVar1 * fVar4);
  param_2[2] = (float)((float10)fVar2 * fVar4);
  return;
}

