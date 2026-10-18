/* speed.exe 0071b1a0 FUN_0071b1a0; analysis pseudocode, not buildable source.
 * calls 00700e80 FUN_00700e80
 * calls 00700db0 FUN_00700db0
 * calls 00715b90 FUN_00715b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071b1a0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  int iStack_8;
  
  iVar3 = DAT_00993cc8;
  if (*(int **)(DAT_00993cc8 + 0x130) == (int *)0x0) {
    bVar6 = false;
  }
  else {
    iVar5 = (**(code **)(**(int **)(DAT_00993cc8 + 0x130) + 0x114))();
    bVar6 = iVar5 == 2;
    if (bVar6) {
      iVar5 = 0;
      goto LAB_0071b1f4;
    }
  }
  if (((float)param_1[9] < _DAT_00894d58) || ((char)param_1[0x10] != '\0')) {
    iVar5 = param_1[3];
    param_1[3] = iVar5 + 1;
  }
  else {
    iVar5 = 0;
  }
LAB_0071b1f4:
  param_1[3] = iVar5;
  if (_DAT_008b0e74 < (float)param_1[0x12]) {
    FUN_00700e80();
    return;
  }
  iStack_8 = 0x3f800000;
  if (_DAT_008b0e68 <= (float)param_1[0xe]) {
    iStack_8 = 0;
  }
  FUN_00700db0(iStack_8);
  if (_DAT_008b0e6c <= (float)(DAT_00925ae8 - *(int *)(iVar3 + 0x220)) * _DAT_00890984) {
    iStack_8 = param_1[10];
  }
  else {
    iStack_8 = 0x3f800000;
  }
  FUN_00700db0(iStack_8);
  fVar7 = (float10)FUN_00715b90();
  if ((float10)_DAT_008b0e6c <= fVar7) {
    iStack_8 = param_1[10];
  }
  else {
    iStack_8 = 0x3f800000;
  }
  FUN_00700db0(iStack_8);
  if ((char)param_1[0x10] != '\0') {
    fVar1 = (float)param_1[10];
    fVar2 = _DAT_00890968;
    if ((_DAT_00890968 < fVar1) && (fVar2 = fVar1, _DAT_008b0e70 < fVar1)) {
      fVar2 = _DAT_008b0e70;
    }
    param_1[10] = (int)fVar2;
  }
  if (*(int *)(iVar3 + 0x1d4) == 2) {
    (**(code **)(*param_1 + 0xc))(999);
    return;
  }
  if (((char)param_1[0x10] != '\0') && (!bVar6)) {
    if (((float)param_1[9] <= _DAT_00894d58) && (*(int *)(iVar3 + 0x138) != 2)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[10] = 0x3f800000;
    param_1[6] = DAT_00925ae8;
  }
  if ((*(float *)(iVar3 + 0x108) < (float)param_1[0x11] * _DAT_00890f14) &&
     (cVar4 = (**(code **)(**(int **)(iVar3 + 0x130) + 0x30))(), cVar4 != '\0')) {
    param_1[10] = 0x3f5c28f6;
    (**(code **)(*param_1 + 0xc))(1);
    return;
  }
  if ((((*(float *)(iVar3 + 0x108) < (float)param_1[0x11] * _DAT_00890f14) &&
       (*(int *)(iVar3 + 0x1d4) == 1)) &&
      (_DAT_00890e98 < (float)(DAT_00925ae8 - *(int *)(iVar3 + 0x218)) * _DAT_00890984)) &&
     (_DAT_00890e98 < (float)(DAT_00925ae8 - *(int *)(iVar3 + 0x220)) * _DAT_00890984)) {
    (**(code **)(*param_1 + 0xc))(3);
    return;
  }
  if ((param_1[3] == 0) && (*(int *)(iVar3 + 0x1d4) != 2)) {
    if (bVar6) {
      if (*(float *)(iVar3 + 0x108) < (float)param_1[0x11] * _DAT_00893710) {
        (**(code **)(*param_1 + 0xc))(3);
        return;
      }
      (**(code **)(*param_1 + 0xc))(2);
      return;
    }
    if (((float)param_1[0xd] < (float)param_1[0x11] * _DAT_00890f14) &&
       (*(int *)(iVar3 + 0x1d4) == 1)) {
      (**(code **)(*param_1 + 0xc))(3);
      return;
    }
    if ((float)param_1[0x11] * _DAT_008b0e70 < (float)param_1[0xd]) {
      (**(code **)(*param_1 + 0xc))(2);
      return;
    }
    if ((float)param_1[0xe] < _DAT_008b0e68) {
      (**(code **)(*param_1 + 0xc))(1);
      param_1[10] = 0x3eb33333;
    }
  }
  return;
}

