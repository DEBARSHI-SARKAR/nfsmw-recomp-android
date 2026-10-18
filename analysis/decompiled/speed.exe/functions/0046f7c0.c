/* speed.exe 0046f7c0 FUN_0046f7c0; analysis pseudocode, not buildable source.
 * calls 00653740 FUN_00653740
 */

void __thiscall FUN_0046f7c0(int *param_1,float *param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  
  iVar1 = param_1[1];
  if (iVar1 < 2) {
    if (0 < iVar1) {
      *param_2 = *(float *)(*param_1 + 4);
      return;
    }
  }
  else {
    pfVar2 = (float *)*param_1;
    if (param_3 < *pfVar2 != (param_3 == *pfVar2)) {
      *param_2 = pfVar2[1];
      return;
    }
    if (pfVar2[iVar1 * 2 + -2] <= param_3) {
      *param_2 = pfVar2[iVar1 * 2 + -1];
      return;
    }
    iVar3 = 0;
    pfVar4 = pfVar2;
    if (0 < iVar1 + -1) {
      do {
        if ((*pfVar4 <= param_3) && (param_3 < pfVar4[2])) {
          FUN_00653740(param_2,pfVar2 + iVar3 * 2 + 3,pfVar2 + iVar3 * 2 + 1,
                       (param_3 - pfVar2[iVar3 * 2]) / (pfVar2[iVar3 * 2 + 2] - pfVar2[iVar3 * 2]));
          return;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 2;
      } while (iVar3 < iVar1 + -1);
    }
  }
  return;
}

