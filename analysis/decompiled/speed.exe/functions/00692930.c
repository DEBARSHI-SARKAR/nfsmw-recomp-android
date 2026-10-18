/* speed.exe 00692930 FUN_00692930; analysis pseudocode, not buildable source.
 * calls 00401da0 FUN_00401da0
 * calls 0066bc40 FUN_0066bc40
 * calls 00401ae0 FUN_00401ae0
 * calls 0066bc10 FUN_0066bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00692930(int param_1,undefined4 param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_8;
  
  cVar3 = (**(code **)(*(int *)(param_1 + 0x54) + 0x2c))();
  if (cVar3 == '\0') {
    return (float10)_DAT_0089096c;
  }
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x98))();
  fStack_8 = 0.0;
  fVar1 = (float)(fVar6 * (float10)_DAT_008967e0);
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
  if ((piVar4 == (int *)0x0) || (cVar3 = (**(code **)(*piVar4 + 0x44))(), cVar3 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x124);
    if (fVar1 < *(float *)(iVar5 + 0x1c)) goto LAB_006929e1;
    if (1 < *(int *)(param_1 + 0x84)) {
      fVar2 = *(float *)(iVar5 + 0xc);
      fVar6 = (float10)FUN_00401ae0(fVar1,*(float *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0x18));
      fStack_8 = (float)(((float10)*(float *)(iVar5 + 0x14) - (float10)fVar2) * fVar6 +
                        (float10)fVar2);
      goto LAB_006929e1;
    }
  }
  else {
LAB_006929e1:
    if (((1 < *(int *)(param_1 + 0x84)) &&
        (*(float *)(param_1 + 0x8c) < _DAT_00890968 == (*(float *)(param_1 + 0x8c) == _DAT_00890968)
        )) && (cVar3 = (**(code **)(*(int *)(param_1 + 0x78) + 4))(), cVar3 == '\0'))
    goto LAB_00692a11;
  }
  param_4 = '\0';
LAB_00692a11:
  if (((fVar1 < _DAT_008aac84) &&
      (cVar3 = (**(code **)(*(int *)(param_1 + 0x54) + 0x20))(), cVar3 == '\0')) ||
     ((fVar1 < _DAT_008aac18 &&
      (cVar3 = (**(code **)(*(int *)(param_1 + 0x54) + 0x20))(), cVar3 != '\0')))) {
    param_4 = '\0';
  }
  fVar6 = (float10)FUN_0066bc40(param_1 + 0x11c,param_2);
  fVar1 = _DAT_00890968;
  if ((float)fVar6 <= _DAT_00890968) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    return (float10)1.0;
  }
  if ((param_4 != '\0') && (_DAT_00890968 < *(float *)(param_1 + 0xf8))) {
    _param_4 = param_3 / (float)fVar6;
    if ((DAT_00937804 != '\0') ||
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 0x58))(), iVar5 == 6)) {
      _param_4 = 0.0;
    }
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x118) + 4))();
      _param_4 = (float)((fVar6 * (float10)_DAT_00891068 + (float10)_DAT_0089096c) *
                        (float10)_param_4);
    }
    *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xf8) - _param_4;
    fVar6 = (float10)FUN_0066bc10(param_1 + 0x11c,param_2);
    *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
    fVar1 = *(float *)(param_1 + 0xf8);
    if (*(float *)(param_1 + 0xf8) <= _DAT_00890968) {
      fVar1 = _DAT_00890968;
    }
    *(float *)(param_1 + 0xf8) = fVar1;
    return (float10)(float)fVar6;
  }
  if ((_DAT_00890968 < *(float *)(param_1 + 0x100)) &&
     (_DAT_00890968 < **(float **)(param_1 + 0x124))) {
    fVar2 = *(float *)(param_1 + 0x100) - param_3 / **(float **)(param_1 + 0x124);
    *(float *)(param_1 + 0x100) = fVar2;
    if (fVar2 <= fVar1) {
      fVar2 = _DAT_00890968;
    }
    *(float *)(param_1 + 0x100) = fVar2;
    return (float10)1.0;
  }
  if ((*(float *)(param_1 + 0xf8) < _DAT_0089096c) && (_DAT_00890968 < fStack_8)) {
    fVar6 = (float10)param_3 / (float10)fStack_8;
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x118) + 4))();
      fVar6 = (fVar7 + (float10)_DAT_0089096c) * (float10)(float)fVar6;
    }
    fVar6 = (float10)FUN_00401da0((float)(fVar6 + (float10)*(float *)(param_1 + 0xf8)),0x3f800000);
    *(float *)(param_1 + 0xf8) = (float)fVar6;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  return (float10)1.0;
}

