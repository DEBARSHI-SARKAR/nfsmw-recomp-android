/* speed.exe 0042f140 FUN_0042f140; analysis pseudocode, not buildable source.
 * calls 007658a0 FUN_007658a0
 * calls 0042aa80 FUN_0042aa80
 * calls 00410700 FUN_00410700
 * calls 004100a0 FUN_004100a0
 * calls 00407ff0 FUN_00407ff0
 * calls 00788f30 FUN_00788f30
 * calls 007862d0 FUN_007862d0
 * calls 00770090 FUN_00770090
 * calls 00407e10 FUN_00407e10
 * calls 004293d0 FUN_004293d0
 * calls 006533b0 FUN_006533b0
 * calls 004047b0 FUN_004047b0
 * calls 005fdda0 FUN_005fdda0
 * calls 0077bba0 FUN_0077bba0
 * calls 0076fe90 FUN_0076fe90
 * calls 007700b0 FUN_007700b0
 * calls 00766640 FUN_00766640
 * calls 00776600 FUN_00776600
 * calls 00786330 FUN_00786330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042f140(int param_1,undefined4 param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_b14;
  undefined1 auStack_b10 [84];
  float fStack_abc;
  char cStack_ab8;
  undefined1 uStack_ab7;
  undefined1 uStack_ab6;
  undefined1 uStack_ab4;
  undefined4 uStack_a90;
  undefined4 uStack_a88;
  short sStack_a7a;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008683ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_b14 = param_1;
  if (DAT_0090d5fa != '\0') {
    iVar6 = *(int *)(param_1 + 0x7cc);
    ExceptionList = &pvStack_c;
    cVar3 = (**(code **)(iVar6 + 0xc))();
    (**(code **)(iVar6 + 0x10))('\x01' - (cVar3 != '\0'));
    DAT_0090d5fa = '\0';
  }
  FUN_00407e10();
  cVar3 = (**(code **)(*(int *)(param_1 + 0x7cc) + 0xc))();
  if (cVar3 != '\0') {
    (**(code **)(**(int **)(param_1 + 0xe0) + 8))();
    FUN_0042aa80(param_2);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_004293d0(param_2);
  piVar9 = (int *)(param_1 + 0x4c);
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  (**(code **)(*piVar4 + 0xb8))(auStack_b10);
  piVar4 = (int *)(**(code **)(*piVar9 + 4))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
  fVar10 = (float10)(**(code **)(*piVar4 + 0x2c))();
  piVar5 = (int *)(**(code **)(*piVar9 + 8))();
  (**(code **)(*piVar5 + 0x30))();
  bVar2 = false;
  iVar6 = (**(code **)(*piVar9 + 0x48))();
  if (*(int *)(iVar6 + 0x78) != 0) {
    fVar11 = (float10)FUN_006533b0((float)fVar10);
    fVar1 = (float)fVar11;
    uVar7 = (**(code **)(*piVar4 + 0x20))();
    fVar11 = (float10)FUN_004100a0(iVar6 + 0x98,uVar7);
    if ((float10)fVar1 <= fVar11) {
      if ((float10)_DAT_008906cc < fVar11) {
        bVar2 = true;
      }
    }
    else if (*(char *)(iVar6 + 0x2c0) == '\0') {
      FUN_0077bba0((float)((float10)fVar1 - fVar11),&local_b14,fVar1);
    }
    piVar5 = (int *)(**(code **)(*piVar9 + 8))();
    iVar8 = (**(code **)(*piVar5 + 0x30))();
    FUN_00776600(iVar8 != 1);
    if (!bVar2) {
      fVar1 = *(float *)(iVar6 + 0x4c);
      if (fVar1 <= _DAT_00890d3c) goto LAB_0042f429;
      FUN_00410700();
      puStack_8 = (undefined1 *)0x0;
      uStack_a90 = 2;
      FUN_007658a0(*(undefined4 *)(iVar6 + 0x7c));
      uStack_a88 = *(undefined4 *)(iVar6 + 0x80);
      if ((*(char *)(iVar6 + 0x51) == '\0') || (uStack_ab7 = 1, DAT_009b3829 == '\0')) {
        uStack_ab7 = 0;
      }
      uStack_ab6 = *(undefined1 *)(iVar6 + 0x52);
      uStack_ab4 = *(undefined1 *)(iVar6 + 0x54);
      uVar13 = 0x3f800000;
      uVar12 = 0;
      piVar5 = &local_b14;
      uVar7 = (**(code **)(*piVar4 + 0x20))(piVar5,0,0x3f800000);
      FUN_007862d0(uVar7,piVar5,uVar12,uVar13);
      bVar2 = false;
      if ((((cStack_ab8 != '\0') &&
           (iVar8 = (int)sStack_a7a, (*(byte *)(iVar8 * 0x16 + 10 + DAT_009b38c0) & 1) == 0)) &&
          (cVar3 = FUN_007700b0(iVar8,0), cVar3 == '\0')) &&
         ((cVar3 = FUN_00766640(iVar8), cVar3 == '\0' && (FUN_00776600(0), fStack_abc < fVar1)))) {
        bVar2 = true;
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004047b0();
      if (!bVar2) goto LAB_0042f429;
    }
  }
  (**(code **)(*piVar9 + 0x50))(2);
  *(undefined4 *)(iVar6 + 0x78) = 2;
  fVar10 = (float10)FUN_006533b0((float)fVar10);
  FUN_0077bba0((float)fVar10,&local_b14,0);
  FUN_00776600(1);
LAB_0042f429:
  if (((DAT_0091e000 != 0) &&
      ((*(int *)(DAT_0091e000 + 0x1960) == 0 || (*(char *)(DAT_0091e000 + 0x198a) != '\0')))) &&
     ((*(int *)(iVar6 + 0x78) != 3 &&
      (((cVar3 = FUN_00770090(), cVar3 == '\0' && (*(char *)(iVar6 + 0x50) != '\0')) &&
       (iVar8 = (**(code **)(*piVar9 + 100))(), *(char *)(iVar8 + 0x2c) != '\0')))))) {
    FUN_00788f30(iVar8 + 0x10,iVar8 + 0x20,0);
  }
  piVar4 = (int *)(**(code **)(*piVar9 + 8))();
  iVar8 = (**(code **)(*piVar4 + 0x30))();
  if (iVar8 == 1) {
    *(undefined4 *)(iVar6 + 0x80) = 2;
    cVar3 = FUN_00407ff0();
    if (cVar3 == '\0') {
      FUN_00786330(0);
    }
    else {
      (**(code **)(*piVar9 + 0x24))();
      (**(code **)(*piVar9 + 0x3c))(iVar6 + 0x98);
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x80) = 0;
  }
  iVar6 = (**(code **)(*piVar9 + 0xa0))();
  if (iVar6 != 0) {
    piVar4 = (int *)(**(code **)(*piVar9 + 0xa0))();
    cVar3 = (**(code **)(*piVar4 + 0x28))();
    if (cVar3 != '\0') {
      piVar4 = (int *)(**(code **)(*piVar9 + 0xa0))();
      cVar3 = (**(code **)(*piVar4 + 0x8c))();
      if (cVar3 != '\0') {
        (**(code **)(*piVar9 + 0xb4))();
        cVar3 = FUN_0076fe90();
        if (cVar3 == '\0') {
          piVar9 = (int *)(**(code **)(*piVar9 + 0xa0))();
          fVar10 = (float10)(**(code **)(*piVar9 + 0x128))();
          if (fVar10 < (float10)_DAT_00890dc0) {
            FUN_005fdda0(0x80);
          }
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

