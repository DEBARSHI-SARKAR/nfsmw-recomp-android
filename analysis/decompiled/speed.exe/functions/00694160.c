/* speed.exe 00694160 FUN_00694160; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 0045a760 FUN_0045a760
 * calls 00452380 FUN_00452380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00694160(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_EBP;
  uint uVar10;
  float unaff_EDI;
  float10 fVar11;
  float10 fVar12;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  int iStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c038;
  pvStack_c = ExceptionList;
  uVar9 = 0;
  ExceptionList = &pvStack_c;
  if (((int *)param_1[0x18] != (int *)0x0) && (ExceptionList = &pvStack_c, param_1[0x1a] != 0)) {
    ExceptionList = &pvStack_c;
    fVar11 = (float10)(**(code **)(*(int *)param_1[0x18] + 4))();
    fVar1 = *(float *)(param_1[0x23] + 0x5c);
    fVar2 = *(float *)(param_1[0x23] + 0x58) - fVar1;
    fVar3 = _DAT_00890968;
    if ((_DAT_00890968 < fVar2) &&
       ((fVar4 = ((float)fVar11 - fVar1) / fVar2, fVar3 = _DAT_0089096c, fVar4 < _DAT_0089096c &&
        (fVar3 = fVar4, fVar4 < _DAT_00890968)))) {
      fVar3 = _DAT_00890968;
    }
    param_1[0x1f] = (int)(*(float *)(param_2 + 0x94) * fVar2 + fVar1);
    *(float *)(param_2 + 4) = fVar3;
    uVar5 = (**(code **)(*(int *)param_1[0x18] + 0x20))();
    *(undefined1 *)(param_2 + 0xe0) = uVar5;
    fVar11 = (float10)(**(code **)(*(int *)param_1[0x18] + 0x1c))();
    *(float *)(param_2 + 0xe4) = (float)fVar11;
    uVar7 = (**(code **)(*(int *)param_1[0x1a] + 4))();
    *(undefined4 *)(param_2 + 0x18) = uVar7;
  }
  if ((int *)param_1[0x19] != (int *)0x0) {
    iVar8 = (**(code **)(*(int *)param_1[0x19] + 8))();
    fVar1 = *(float *)(iVar8 + 0x14);
    fStack_3c = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fStack_3c = fVar1, fVar1 < _DAT_00890968)) {
      fStack_3c = 0.0;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x19] + 8))();
    fVar1 = *(float *)(iVar8 + 0x18);
    fStack_40 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fStack_40 = fVar1, fVar1 < _DAT_00890968)) {
      fStack_40 = 0.0;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x19] + 8))();
    fVar1 = *(float *)(iVar8 + 0x1c);
    fStack_38 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fStack_38 = fVar1, fVar1 < _DAT_00890968)) {
      fStack_38 = 0.0;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x19] + 8))();
    fVar1 = *(float *)(iVar8 + 4);
    fVar2 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_008aac20)) {
      fVar2 = _DAT_008aac20;
    }
    *(float *)(param_2 + 0x14) = fVar2;
    *(float *)(param_2 + 8) = fStack_3c;
    *(float *)(param_2 + 0xc) = fStack_40;
    *(float *)(param_2 + 0x10) = fStack_38;
    if (param_1[0x20] == 0) {
      iVar8 = (**(code **)(*(int *)param_1[0x12] + 0x58))();
      if (iVar8 == 6) {
        *(undefined4 *)(param_2 + 0xf8) = 4;
      }
      else if (((int *)param_1[0x1d] == (int *)0x0) ||
              (cVar6 = (**(code **)(*(int *)param_1[0x1d] + 0xc))(), cVar6 != '\0')) {
        if (param_1[0x1c] != 0) {
          *(undefined4 *)(param_2 + 0xf8) = 2;
          fVar11 = (float10)(**(code **)(*(int *)param_1[0x1c] + 0x34))();
          *(float *)(param_2 + 0xf4) = (float)fVar11;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0xf8) = 1;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xf8) = 3;
    }
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    cVar6 = (**(code **)(*(int *)param_1[0x1e] + 0x18))();
    if (cVar6 == '\0') {
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1e] + 0x14))();
      *(float *)(param_2 + 0x40) = (float)fVar11;
    }
    else {
      *(undefined4 *)(param_2 + 0x40) = 0;
    }
  }
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x12] + 0xb0))();
  *(float *)(param_2 + 0x3c) = (float)(fVar11 * (float10)_DAT_008aabd8);
  if (((int *)param_1[0x1b] != (int *)0x0) &&
     (iVar8 = (**(code **)(*(int *)param_1[0x1b] + 8))(), iVar8 != 0)) {
    do {
      (**(code **)(*(int *)param_1[0x1b] + 0x48))(uVar9);
      (**(code **)(*(int *)param_1[0x1b] + 0x10))(uVar9);
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 4))();
      if (uVar9 < 2) {
        uVar10 = uVar9 & 1;
      }
      else {
        uVar10 = (byte)~(byte)uVar9 & 1 | 2;
      }
      (**(code **)(*(int *)param_1[0x1b] + 0x30))(uVar9);
      fVar12 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x34))(uVar9);
      fVar12 = fVar12 * (float10)_DAT_00895074;
      if ((float10)unaff_EDI <= fVar12) {
        if (-fVar12 <= (float10)unaff_EDI) {
          unaff_EDI = 0.0;
        }
        else {
          unaff_EDI = (float)(fVar12 + (float10)unaff_EDI);
        }
      }
      else {
        unaff_EDI = (float)((float10)unaff_EDI - fVar12);
      }
      iVar8 = (**(code **)(*(int *)param_1[0x1b] + 0x44))(uVar9);
      FUN_00452380(*(undefined4 *)(iVar8 + 4),0,0);
      if (iStack_30 == 0) {
        iStack_30 = FUN_006269b0(0xfc);
      }
      FUN_00452380(uStack_34,0,0);
      if ((float)fVar11 == 0.0) {
        FUN_006269b0(0xfc);
      }
      uVar5 = (**(code **)(*(int *)param_1[0x1b] + 0x24))(uVar9);
      FUN_0045a760(unaff_EBP);
      *(undefined1 *)(param_2 + 0xd8 + uVar10) = uVar5;
      FUN_0045a430();
      *(float *)(param_2 + 0x1c + uVar10 * 4) = unaff_EDI;
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x60))();
      *(float *)(param_2 + 0x34) = (float)fVar11;
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x5c))();
      *(float *)(param_2 + 0x38) = (float)fVar11;
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x38))(uVar9);
      *(uint *)(param_2 + 0x98 + uVar10 * 8) = uVar9;
      *(float *)(param_2 + 0x9c + uVar10 * 8) = (float)-fVar11;
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x18))(uVar9);
      *(float *)(param_2 + 0xb8 + uVar10 * 4) = (float)fVar11;
      fVar11 = (float10)(**(code **)(*(int *)param_1[0x1b] + 0x28))(uVar9);
      *(float *)(param_2 + 200 + uVar10 * 4) = (float)fVar11;
      (**(code **)(*param_1 + 0x2c))(param_2,uVar9,uVar10);
      FUN_0045a430();
      uVar9 = uVar9 + 1;
      uVar10 = (**(code **)(*(int *)param_1[0x1b] + 8))();
    } while (uVar9 < uVar10);
  }
  ExceptionList = pvStack_c;
  return;
}

