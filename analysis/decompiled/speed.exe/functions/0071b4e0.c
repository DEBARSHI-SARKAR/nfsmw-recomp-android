/* speed.exe 0071b4e0 FUN_0071b4e0; analysis pseudocode, not buildable source.
 * calls 00700db0 FUN_00700db0
 * calls 00701510 FUN_00701510
 * calls 00715b90 FUN_00715b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071b4e0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  int local_4;
  
  iVar1 = DAT_00993cc8;
  if (_DAT_008b0e60 <= (float)param_1[9]) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[3];
    param_1[3] = iVar3 + 1;
  }
  param_1[3] = iVar3;
  if (*(int *)(iVar1 + 0x1d4) == 2) {
    (**(code **)(*param_1 + 0xc))(999);
    return;
  }
  if (*(float *)(iVar1 + 0x108) < (float)param_1[0x11] * _DAT_00890f14) {
    fVar5 = (float10)(**(code **)(**(int **)(iVar1 + 0x130) + 0x60))();
    if ((float10)_DAT_008b0e70 < fVar5) {
      cVar2 = FUN_00701510();
      if (cVar2 != '\0') {
        param_1[10] = 0x3f800000;
        goto LAB_0071b62f;
      }
    }
  }
  if (_DAT_00892fac <= (float)param_1[10]) {
    param_1[10] = 0x3f4ccccd;
  }
  local_4 = 0x3f5c28f6;
  if ((float)param_1[0x11] * _DAT_008b268c <= *(float *)(iVar1 + 0x108)) {
    local_4 = 0;
  }
  FUN_00700db0(local_4);
  if (_DAT_008b0e6c <= (float)(DAT_00925ae8 - *(int *)(iVar1 + 0x220)) * _DAT_00890984) {
    local_4 = param_1[10];
  }
  else {
    local_4 = 0x3f5c28f6;
  }
  FUN_00700db0(local_4);
  fVar5 = (float10)FUN_00715b90();
  if ((float10)_DAT_008b0e6c <= fVar5) {
    local_4 = param_1[10];
  }
  else {
    local_4 = 0x3f5c28f6;
  }
  FUN_00700db0(local_4);
LAB_0071b62f:
  if (*(int **)(iVar1 + 0x130) == (int *)0x0) {
    bVar4 = false;
  }
  else {
    iVar3 = (**(code **)(**(int **)(iVar1 + 0x130) + 0x114))();
    bVar4 = iVar3 == 2;
  }
  if (((*(int *)(iVar1 + 0x1d4) == 1) || (bVar4)) &&
     (_DAT_00890e98 < (float)(DAT_00925ae8 - *(int *)(iVar1 + 0x218)) * _DAT_00890984)) {
    if (*(float *)(iVar1 + 0x108) < (float)param_1[0x11] * _DAT_00893710) {
      (**(code **)(*param_1 + 0xc))(3);
      param_1[10] = 0x3f800000;
      return;
    }
    (**(code **)(*param_1 + 0xc))(2);
    param_1[10] = 0x3f800000;
    return;
  }
  if (param_1[3] == 0) {
    if ((float)param_1[0x11] * _DAT_008b0e70 < (float)param_1[0xd]) {
      (**(code **)(*param_1 + 0xc))(0);
      param_1[10] = 0x3f266666;
      return;
    }
    if ((_DAT_008b0e5c < (float)(DAT_00925ae8 - *(int *)(iVar1 + 0x218)) * _DAT_00890984) ||
       (_DAT_008b0e50 < (float)param_1[9])) {
      (**(code **)(*param_1 + 0xc))(0);
      param_1[10] = 0x3f266666;
    }
  }
  return;
}

