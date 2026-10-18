/* speed.exe 0064bdf0 FUN_0064bdf0; analysis pseudocode, not buildable source.
 * calls 0064bc80 FUN_0064bc80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0064bdf0(undefined4 *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  pfVar1 = (float *)*param_1;
  if ((param_2 < *pfVar1) || (iVar2 = param_1[1], pfVar1[iVar2 * 2 + -2] <= param_2)) {
    return (float10)_DAT_00890968;
  }
  iVar3 = FUN_0064bc80(param_2);
  if ((-1 < iVar3) && (iVar3 <= iVar2 + -2)) {
    return ((float10)param_2 - (float10)pfVar1[iVar3 * 2]) *
           (((float10)pfVar1[iVar3 * 2 + 3] - (float10)pfVar1[iVar3 * 2 + 1]) /
           ((float10)pfVar1[iVar3 * 2 + 2] - (float10)pfVar1[iVar3 * 2])) +
           (float10)pfVar1[iVar3 * 2 + 1];
  }
  return ((float10)param_2 - (float10)pfVar1[iVar3 * 2]) * (float10)_DAT_00890968 +
         (float10)pfVar1[iVar3 * 2 + 1];
}

