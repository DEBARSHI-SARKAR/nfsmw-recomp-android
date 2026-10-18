/* speed.exe 006533b0 FUN_006533b0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006533b0(int *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = *param_1;
  fVar3 = (param_2 - (float)param_1[1]) * (float)param_1[3];
  iVar4 = FUN_007c4b80();
  if ((-1 < iVar4) && (_DAT_00890968 <= fVar3)) {
    if (iVar2 + -1 <= iVar4) {
      return (float10)*(float *)(param_1[4] + -4 + iVar2 * 4);
    }
    fVar5 = (float10)iVar4;
    if ((float10)fVar3 < fVar5) {
      fVar5 = fVar5 - (float10)_DAT_0089096c;
    }
    pfVar1 = (float *)(param_1[4] + iVar4 * 4);
    return ((float10)fVar3 - fVar5) * (float10)pfVar1[1] +
           ((float10)_DAT_0089096c - ((float10)fVar3 - fVar5)) * (float10)*pfVar1;
  }
  return (float10)*(float *)param_1[4];
}

