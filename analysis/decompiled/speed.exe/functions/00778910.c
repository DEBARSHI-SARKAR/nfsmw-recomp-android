/* speed.exe 00778910 FUN_00778910; analysis pseudocode, not buildable source.
 * calls 00404690 FUN_00404690
 * calls 00401d10 FUN_00401d10
 * calls 007698a0 FUN_007698a0
 * calls 00401ce0 FUN_00401ce0
 * calls 00775a00 FUN_00775a00
 * calls 00410220 FUN_00410220
 * calls 00401dc0 FUN_00401dc0
 * calls 007c44e0 FUN_007c44e0
 * calls 00401d70 FUN_00401d70
 * calls 00401da0 FUN_00401da0
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00778910(int param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float local_2c;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    return (float10)_DAT_00890968;
  }
  local_20 = 0.0;
  local_2c = 0.0;
  if ((((2 < **(int **)(param_1 + 8)) && (*(char *)(param_1 + 0x55) != '\0')) &&
      ((*(int *)(param_1 + 0x58) != 0 || (*(int *)(param_1 + 0x5c) != 0)))) &&
     (cVar9 = FUN_00404690(), cVar9 == '\0')) {
    FUN_00401ce0(param_1 + 0x164,param_2,&local_18);
    local_14 = 0.0;
    fVar14 = (float10)FUN_00410220(&local_18);
    iVar10 = FUN_00775a00(param_1 + 0x158,0);
    if ((_DAT_0089096c < (float)fVar14) && (-1 < iVar10)) {
      iVar10 = FUN_007698a0(iVar10);
      fVar14 = (float10)FUN_00401dc0((float)fVar14,
                                     ABS(*(float *)(iVar10 + 0x24) - *(float *)(iVar10 + 0x20)));
      FUN_00401ce0(param_1 + 0x98,param_1 + 0x158,local_c);
      local_c[1] = 0.0;
      FUN_00410220(local_c);
      FUN_00401d70(local_10 * local_c[0] - local_c[2] * local_18,0xbf800000,0x3f800000);
      fVar15 = (float10)FUN_007c44e0();
      fVar15 = (float10)FUN_00401d10((float)(fVar15 * (float10)_DAT_0089096c));
      local_2c = (float)fVar15;
      if (local_18 * local_c[0] + local_c[2] * local_10 < _DAT_00890968) {
        local_2c = _DAT_008b5a10 - local_2c;
      }
      fVar14 = (float10)FUN_00401dc0((float)fVar14,0x3f800000);
      fVar15 = (float10)FUN_00401da0(local_2c,0x3fc90fdb);
      fVar15 = (float10)fsin(fVar15 * (float10)_DAT_0089096c);
      local_2c = (float)(fVar15 * (float10)local_2c);
      if (*(int *)(param_1 + 0x5c) != 0) {
        fVar5 = local_18 * *param_3 + local_14 * param_3[1] + local_10 * param_3[2];
        fVar15 = (float10)FUN_00401ae0(fVar5 - *(float *)(param_1 + 100),0,fVar5);
        local_2c = (float)(fVar15 * fVar15 * (float10)local_2c);
      }
      fVar15 = (float10)FUN_00401d70(local_2c,0,DAT_009b3a18);
      local_2c = (float)(fVar15 / (float10)(float)fVar14);
    }
  }
  piVar1 = *(int **)(param_1 + 8);
  iVar10 = *piVar1;
  iVar2 = *(int *)(param_1 + 4);
  param_3 = (float *)0x0;
  iVar13 = iVar2;
  fVar5 = _DAT_00890968;
  fVar6 = _DAT_00890968;
  if (3 < iVar10 - iVar2) {
    iVar3 = piVar1[2];
    iVar12 = iVar2 + 2;
    do {
      if (iVar10 < iVar3) {
        iVar11 = iVar13 % iVar10;
      }
      else {
        iVar11 = (piVar1[1] + 1 + iVar13) % iVar3;
      }
      fVar4 = (float)piVar1[iVar11 * 0x10 + 0xb];
      fVar7 = _DAT_00890dc4;
      if ((fVar4 < _DAT_00890dc4) && (fVar7 = fVar4, fVar4 < _DAT_008b5c94)) {
        fVar7 = _DAT_008b5c94;
      }
      if (iVar2 < iVar13) {
        fVar6 = (fVar7 + (float)param_3) * _DAT_008933d4 * (float)piVar1[iVar11 * 0x10 + 10] + fVar6
        ;
        fVar5 = (float)piVar1[iVar11 * 0x10 + 10] + fVar5;
      }
      if (iVar10 < iVar3) {
        iVar11 = (iVar12 + -1) % iVar10;
      }
      else {
        iVar11 = (piVar1[1] + 2 + iVar13) % iVar3;
      }
      fVar4 = (float)piVar1[iVar11 * 0x10 + 0xb];
      fVar8 = _DAT_00890dc4;
      if ((fVar4 < _DAT_00890dc4) && (fVar8 = fVar4, fVar4 < _DAT_008b5c94)) {
        fVar8 = _DAT_008b5c94;
      }
      if (iVar2 < iVar12 + -1) {
        fVar6 = (fVar8 + fVar7) * _DAT_008933d4 * (float)piVar1[iVar11 * 0x10 + 10] + fVar6;
        fVar5 = (float)piVar1[iVar11 * 0x10 + 10] + fVar5;
      }
      if (iVar10 < iVar3) {
        iVar11 = iVar12 % iVar10;
      }
      else {
        iVar11 = (piVar1[1] + 3 + iVar13) % iVar3;
      }
      fVar4 = (float)piVar1[iVar11 * 0x10 + 0xb];
      fVar7 = _DAT_00890dc4;
      if ((fVar4 < _DAT_00890dc4) && (fVar7 = fVar4, fVar4 < _DAT_008b5c94)) {
        fVar7 = _DAT_008b5c94;
      }
      if (iVar2 < iVar12) {
        fVar6 = (fVar7 + fVar8) * _DAT_008933d4 * (float)piVar1[iVar11 * 0x10 + 10] + fVar6;
        fVar5 = (float)piVar1[iVar11 * 0x10 + 10] + fVar5;
      }
      if (iVar10 < iVar3) {
        iVar11 = (iVar12 + 1) % iVar10;
      }
      else {
        iVar11 = (piVar1[1] + 4 + iVar13) % iVar3;
      }
      fVar4 = (float)piVar1[iVar11 * 0x10 + 0xb];
      param_3 = (float *)_DAT_00890dc4;
      if ((fVar4 < _DAT_00890dc4) && (param_3 = (float *)fVar4, fVar4 < _DAT_008b5c94)) {
        param_3 = (float *)_DAT_008b5c94;
      }
      if (iVar2 < iVar12 + 1) {
        fVar6 = ((float)param_3 + fVar7) * _DAT_008933d4 * (float)piVar1[iVar11 * 0x10 + 10] + fVar6
        ;
        fVar5 = (float)piVar1[iVar11 * 0x10 + 10] + fVar5;
      }
      iVar13 = iVar13 + 4;
      iVar12 = iVar12 + 4;
    } while (iVar13 < iVar10 + -3);
  }
  iVar10 = *piVar1;
  if (iVar13 < iVar10) {
    do {
      if (iVar10 < piVar1[2]) {
        iVar12 = iVar13 % iVar10;
      }
      else {
        iVar12 = (piVar1[1] + 1 + iVar13) % piVar1[2];
      }
      fVar4 = (float)piVar1[iVar12 * 0x10 + 0xb];
      fVar7 = _DAT_00890dc4;
      if ((fVar4 < _DAT_00890dc4) && (fVar7 = fVar4, fVar4 < _DAT_008b5c94)) {
        fVar7 = _DAT_008b5c94;
      }
      if (iVar2 < iVar13) {
        fVar6 = (fVar7 + (float)param_3) * _DAT_008933d4 * (float)piVar1[iVar12 * 0x10 + 10] + fVar6
        ;
        fVar5 = (float)piVar1[iVar12 * 0x10 + 10] + fVar5;
      }
      iVar13 = iVar13 + 1;
      param_3 = (float *)fVar7;
    } while (iVar13 < iVar10);
  }
  if (_DAT_00890968 < fVar5) {
    local_20 = ABS(fVar6 / fVar5);
  }
  if (local_20 <= local_2c) {
    return (float10)local_2c;
  }
  return (float10)local_20;
}

