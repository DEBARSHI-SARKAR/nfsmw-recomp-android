/* speed.exe 005ff990 FUN_005ff990; analysis pseudocode, not buildable source.
 * calls 005fbd90 FUN_005fbd90
 * calls 006533b0 FUN_006533b0
 * calls 005fc7a0 FUN_005fc7a0
 * calls 005fac10 FUN_005fac10
 * calls 005fc800 FUN_005fc800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005ff990(int param_1,float param_2,float param_3,float *param_4,float *param_5,char param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_1c;
  
  iVar6 = (int)param_3;
  bVar9 = false;
  bVar5 = false;
  if (param_6 == '\0') {
    if (*(int *)(param_1 + 0x1964) == 0) {
      if (*(int *)(param_1 + 0x1968) == 0) {
        return 0;
      }
      cVar7 = FUN_005fc7a0();
      if (cVar7 == '\0') {
        return 0;
      }
      iVar8 = FUN_005fac10();
      _param_6 = *(float *)(&DAT_008a37d8 + iVar8 * 4);
    }
    else {
      if (*(int *)(param_1 + 0x1964) != 2) {
        return 0;
      }
      fVar4 = (*(float *)(param_1 + 0x449c) + _DAT_0089096c) * _DAT_008933d4;
      _param_6 = _DAT_0089096c;
      if ((fVar4 < _DAT_0089096c) && (_param_6 = fVar4, fVar4 < _DAT_00890968)) {
        _param_6 = _DAT_00890968;
      }
      bVar9 = false;
      if (*(int *)(param_1 + 0x1968) != 0) {
        cVar7 = FUN_005fc800();
        bVar9 = cVar7 != '\0';
        cVar7 = FUN_005fbd90();
        if (cVar7 != '\0') {
          bVar5 = true;
          _param_6 = (_DAT_0089096c - _param_6) * _DAT_008933d4 + _param_6;
        }
      }
    }
  }
  else {
    _param_6 = 1.0;
    bVar9 = false;
  }
  uVar3 = *(undefined4 *)((int)param_2 + 0x18);
  if (*(byte *)((int)param_3 + 0x2e) == 0) {
    param_2 = 0.0;
  }
  else {
    param_2 = ((float)*(byte *)((int)param_3 + 0x2e) * *(float *)((int)param_3 + 0x30)) /
              (*(float *)((int)param_3 + 0x78) * *(float *)((int)param_3 + 8));
  }
  fVar4 = *(float *)((int)param_3 + 0x5c);
  if (bVar9) {
    fVar10 = (float10)FUN_006533b0(uVar3);
    fVar11 = (float10)FUN_006533b0(uVar3);
    fVar1 = *(float *)(param_1 + 0x4494);
    fVar2 = *(float *)(param_1 + 0x4498);
  }
  else {
    fVar10 = (float10)FUN_006533b0(uVar3);
    fVar11 = (float10)FUN_006533b0(uVar3);
    fVar11 = ((float10)(float)fVar10 - fVar11) * (float10)_param_6 + fVar11;
    fVar12 = (float10)FUN_006533b0(uVar3);
    fVar10 = (float10)FUN_006533b0(uVar3);
    fVar10 = ((float10)(float)fVar12 - fVar10) * (float10)_param_6 + fVar10;
    fVar1 = _param_6 * _DAT_00890968 + _DAT_008a37c8;
    fVar2 = _param_6 * _DAT_00890968 + _DAT_00890dc4;
  }
  local_1c = (float)fVar10;
  param_3 = (float)fVar11;
  if (param_3 < _DAT_008a3720) {
    param_3 = _DAT_008a3720;
  }
  fVar4 = (_DAT_00890d3c / param_3) * *(float *)(iVar6 + 0x7c) + fVar2 * fVar4 + fVar1 * param_2;
  fVar1 = _DAT_00890da8;
  if ((_DAT_00890da8 < fVar4) && (fVar1 = fVar4, _DAT_0089096c < fVar4)) {
    fVar1 = _DAT_0089096c;
  }
  *param_5 = fVar1 * local_1c;
  if (!bVar5) {
    *param_4 = fVar1;
    return 1;
  }
  *param_4 = _DAT_0089096c;
  return 1;
}

