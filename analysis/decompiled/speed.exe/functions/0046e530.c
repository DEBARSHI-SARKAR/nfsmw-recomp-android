/* speed.exe 0046e530 FUN_0046e530; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0046e530(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = ((param_1 - param_2) + -0x28) / 0x84;
  }
  iVar1 = iVar2 + 1;
  if (param_2 == 0) {
    fVar3 = (float10)_DAT_00890968;
  }
  else {
    if (iVar1 < 0) {
      fVar3 = (float10)_DAT_00890968;
    }
    else if (iVar1 < *(short *)(param_2 + 0x14)) {
      fVar3 = (float10)*(float *)(iVar1 * 0x84 + 0x38 + param_2);
    }
    else {
      fVar3 = (float10)_DAT_0089096c;
    }
    if (-1 < iVar2) {
      if (*(short *)(param_2 + 0x14) <= iVar2) {
        return fVar3 - (float10)_DAT_0089096c;
      }
      return fVar3 - (float10)*(float *)(iVar2 * 0x84 + 0x38 + param_2);
    }
  }
  return fVar3 - (float10)_DAT_00890968;
}

