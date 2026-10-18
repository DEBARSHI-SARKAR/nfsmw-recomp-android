/* speed.exe 0072d2b0 FUN_0072d2b0; analysis pseudocode, not buildable source.
 */

void FUN_0072d2b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  iVar2 = (int)param_3 - (int)param_1 >> 2;
  if (iVar2 < 0x29) {
    iVar2 = *param_2;
    if (iVar2 < iVar1) {
      *param_2 = iVar1;
      *param_1 = iVar2;
    }
    iVar1 = *param_3;
    if (iVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar1;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    iVar2 = param_1[iVar3];
    if (iVar2 < iVar1) {
      param_1[iVar3] = iVar1;
      *param_1 = iVar2;
    }
    iVar1 = param_1[iVar3 * 2];
    if (iVar1 < param_1[iVar3]) {
      param_1[iVar3 * 2] = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = param_1[iVar3];
    if (iVar1 < *param_1) {
      param_1[iVar3] = *param_1;
      *param_1 = iVar1;
    }
    iVar1 = *param_2;
    piVar4 = param_2 + -iVar3;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = param_2[iVar3];
    if (iVar1 < *param_2) {
      param_2[iVar3] = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    piVar4 = param_3 + -iVar3;
    iVar1 = *piVar4;
    piVar5 = param_3 + iVar3 * -2;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_3;
    if (iVar1 < *piVar4) {
      *param_3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *param_2) {
      *piVar4 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
      return;
    }
  }
  return;
}

