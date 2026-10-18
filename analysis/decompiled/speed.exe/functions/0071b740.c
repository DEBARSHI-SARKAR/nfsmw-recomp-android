/* speed.exe 0071b740 FUN_0071b740; analysis pseudocode, not buildable source.
 * calls 00700e80 FUN_00700e80
 * calls 00700db0 FUN_00700db0
 * calls 00715b90 FUN_00715b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071b740(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 local_4;
  
  iVar1 = DAT_00993cc8;
  if (_DAT_008b0e60 <= (float)param_1[9]) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[3];
    param_1[3] = iVar3 + 1;
  }
  param_1[3] = iVar3;
  if (_DAT_008b0e74 < (float)param_1[0x12]) {
    FUN_00700e80();
    return;
  }
  local_4 = 0x3f800000;
  if ((float)param_1[0xd] <= (float)param_1[0x11] * _DAT_008b0e70) {
    local_4 = 0;
  }
  FUN_00700db0(local_4);
  if (_DAT_00890d3c <= (float)(DAT_00925ae8 - *(int *)(iVar1 + 0x220)) * _DAT_00890984) {
    fVar5 = (float10)FUN_00715b90();
    if ((float10)_DAT_00890d3c <= fVar5) goto LAB_0071b7f9;
  }
  param_1[10] = 0x3e800000;
LAB_0071b7f9:
  if (_DAT_008b0e78 < (float)(DAT_00925ae8 - *(int *)(iVar1 + 0x220)) * _DAT_00890984) {
    fVar5 = (float10)FUN_00715b90();
    if ((((float10)_DAT_008b0e78 < fVar5) &&
        ((float)param_1[0x11] * _DAT_0089119c < *(float *)(iVar1 + 0x108))) &&
       (_DAT_008b0e78 < (float)(DAT_00925ae8 - param_1[7]) * _DAT_00890984)) {
      param_1[10] = (int)((float)param_1[10] * _DAT_008af994);
      param_1[7] = DAT_00925ae8;
    }
  }
  if (*(int *)(iVar1 + 0x1d4) == 2) {
    (**(code **)(*param_1 + 0xc))(999);
    return;
  }
  if (*(float *)(iVar1 + 0x108) < (float)param_1[0x11] * _DAT_00890f14) {
    cVar2 = (**(code **)(**(int **)(iVar1 + 0x130) + 0x30))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xc))(1);
      return;
    }
  }
  if (*(int **)(iVar1 + 0x130) == (int *)0x0) {
    bVar4 = false;
  }
  else {
    iVar3 = (**(code **)(**(int **)(iVar1 + 0x130) + 0x114))();
    bVar4 = iVar3 == 2;
  }
  if (((float)param_1[0xd] < (float)param_1[0x11] * _DAT_00890f14) &&
     ((*(int *)(iVar1 + 0x1d4) == 1 || (bVar4)))) {
    (**(code **)(*param_1 + 0xc))(3);
    return;
  }
  if ((param_1[3] == 0) && (_DAT_008b0e50 < (float)param_1[9])) {
    (**(code **)(*param_1 + 0xc))(0);
  }
  return;
}

