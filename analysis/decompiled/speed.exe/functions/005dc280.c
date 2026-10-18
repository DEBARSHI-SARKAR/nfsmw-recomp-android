/* speed.exe 005dc280 FUN_005dc280; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005dc280(int param_1,int param_2,int param_3,char param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_4 == '\0') {
    return (float10)*(float *)(param_1 + 0x19bc + (param_2 * 0x10 + param_3) * 4);
  }
  fVar3 = (float10)_DAT_00890968;
  iVar2 = 0;
  if (-1 < param_2) {
    pfVar1 = (float *)(param_1 + 0x19bc + param_3 * 4);
    while ((float10)_DAT_00890968 < (float10)*pfVar1) {
      iVar2 = iVar2 + 1;
      fVar3 = (float10)*pfVar1 + fVar3;
      pfVar1 = pfVar1 + 0x10;
      if (param_2 < iVar2) {
        return fVar3;
      }
    }
  }
  return (float10)_DAT_00890968;
}

