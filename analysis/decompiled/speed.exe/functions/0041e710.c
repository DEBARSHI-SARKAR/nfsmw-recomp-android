/* speed.exe 0041e710 FUN_0041e710; analysis pseudocode, not buildable source.
 */

void FUN_0041e710(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_20 [8];
  
  if (*param_2 < *param_1) {
    pfVar2 = param_2;
    pfVar3 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    pfVar2 = param_1;
    pfVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    pfVar2 = local_20;
    pfVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
  }
  if (*param_3 < *param_2) {
    pfVar2 = param_3;
    pfVar3 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    pfVar2 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      param_3 = param_3 + 1;
    }
    pfVar2 = local_20;
    pfVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
  }
  if (*param_2 < *param_1) {
    pfVar2 = param_2;
    pfVar3 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    pfVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      param_2 = param_2 + 1;
    }
    pfVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

