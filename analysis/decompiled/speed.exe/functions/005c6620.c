/* speed.exe 005c6620 FUN_005c6620; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6620(float *param_1,float param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_24 [9];
  
  if (param_1 == param_3) {
    pfVar2 = local_24;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = *param_1;
      param_1 = param_1 + 1;
      pfVar2 = pfVar2 + 1;
    }
    param_1 = local_24;
  }
  fVar3 = (float10)fsin((float10)param_2 * (float10)_DAT_008a2f94);
  fVar4 = (float10)fcos((float10)param_2 * (float10)_DAT_008a2f94);
  *param_3 = (float)(fVar4 * (float10)*param_1 - fVar3 * (float10)param_1[6]);
  param_3[1] = (float)(fVar4 * (float10)param_1[1] - fVar3 * (float10)param_1[7]);
  param_3[2] = (float)(fVar4 * (float10)param_1[2] - fVar3 * (float10)param_1[8]);
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  param_3[6] = (float)(fVar4 * (float10)param_1[6] + fVar3 * (float10)*param_1);
  param_3[7] = (float)(fVar4 * (float10)param_1[7] + fVar3 * (float10)param_1[1]);
  param_3[8] = (float)(fVar4 * (float10)param_1[8] + fVar3 * (float10)param_1[2]);
  return;
}

