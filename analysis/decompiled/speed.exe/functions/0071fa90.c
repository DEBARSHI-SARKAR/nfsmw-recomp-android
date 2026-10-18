/* speed.exe 0071fa90 FUN_0071fa90; analysis pseudocode, not buildable source.
 * calls 0070db50 FUN_0070db50
 * calls 005c5e80 FUN_005c5e80
 * calls 00712b70 FUN_00712b70
 * calls 0045da30 FUN_0045da30
 * calls 00707900 FUN_00707900
 * calls 0071d730 FUN_0071d730
 * calls 00704e00 FUN_00704e00
 * calls 004cf6b0 FUN_004cf6b0
 * calls 00701190 FUN_00701190
 * calls 004ce3d0 FUN_004ce3d0
 * calls 005d59f0 FUN_005d59f0
 * calls 00465fd0 FUN_00465fd0
 * calls 00766130 FUN_00766130
 * calls 0045da70 FUN_0045da70
 * calls 00705060 FUN_00705060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0071fa90(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 unaff_EBX;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 uStack_38;
  int iStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0088039b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar7 = (int *)FUN_005d59f0(&LAB_00403700);
  piVar8 = (int *)(**(code **)(*param_2 + 4))();
  uVar9 = (**(code **)(*piVar8 + 0x34))();
  (**(code **)(*piVar7 + 0x94))();
  (**(code **)(*piVar7 + 0x48))();
  iVar10 = FUN_00766130();
  bVar4 = false;
  iVar11 = (**(code **)(*param_2 + 0x50))();
  bVar15 = iVar11 == -0x2c837f93;
  uStack_38 = CONCAT13(bVar15,(undefined3)uStack_38);
  piVar7 = (int *)FUN_00704e00();
  if ((piVar7 != (int *)0x0) &&
     (piVar7 = (int *)(**(code **)(*piVar7 + 0x58))(uVar9), piVar7 == param_2)) {
    bVar4 = true;
  }
  iVar11 = (**(code **)(*param_2 + 0x50))();
  if (((iVar11 == 0x38b38226) || (iVar11 == 0x54b10e38)) || (iVar11 == 0x2e149eac)) {
    iStack_34 = 0x20;
  }
  else if (((iVar11 == 0x7a49cccb) || (iVar11 == -0x5b149978)) ||
          ((iVar11 == -0x4d0cd01e || (iVar11 == -0x2c837f93)))) {
    iStack_34 = 0x10;
  }
  else {
    if (iVar10 == 0x6b) {
      ExceptionList = pvStack_c;
      return;
    }
    iStack_34 = FUN_00705060(iVar10);
    if (iStack_34 < 1) {
      bVar5 = FUN_0045da30(4);
      iStack_34 = 1 << (bVar5 & 0x1f);
    }
  }
  if (((*(int *)(param_1 + 0x6c) == 0) ||
      (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2 == 0)) || (!bVar15)) {
    pfVar12 = (float *)(**(code **)(*param_2 + 0xc))();
    fVar1 = *(float *)(param_1 + 0x10c) - *pfVar12;
    fVar3 = *(float *)(param_1 + 0x110) - pfVar12[1];
    fVar2 = *(float *)(param_1 + 0x114) - pfVar12[2];
    fVar16 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    iVar11 = *(int *)(param_1 + 0x5c);
    if (iVar11 != *(int *)(param_1 + 0x60)) {
      do {
        piVar7 = *(int **)(iVar11 + 4);
        cVar6 = (**(code **)(*piVar7 + 0x1a0))();
        if ((((cVar6 == '\0') && (!bVar4)) &&
            (fVar17 = (float10)(**(code **)(*piVar7 + 0x58))(), (float10)(float)fVar16 < fVar17)) &&
           (cVar6 = (**(code **)(*piVar7 + 0x1a0))(), cVar6 == '\0')) {
          iVar11 = (**(code **)(*piVar7 + 0x34))();
          if (iVar11 != iStack_34) {
            uVar14 = (**(code **)(*param_2 + 0x50))();
            iVar11 = FUN_00701190(uVar14);
            if (iVar11 < 1) {
              if (iVar10 == 0x6b) {
                ExceptionList = pvStack_c;
                return;
              }
              iVar10 = FUN_00705060(iVar10);
              if (iVar10 < 1) {
                FUN_0045da30(4);
              }
            }
          }
          uVar14 = uVar9;
          uVar13 = (**(code **)(*piVar7 + 0x28))(uVar9);
          FUN_004ce3d0(uVar13,uVar14);
          (**(code **)(*piVar7 + 0x2c))(uVar9);
          uVar9 = FUN_0071d730(uStack_38);
          (**(code **)(*piVar7 + 0x3c))(uStack_38);
          (**(code **)(*piVar7 + 0x40))(uVar9);
          goto LAB_0071fe2a;
        }
        iVar11 = iVar11 + 8;
      } while (iVar11 != *(int *)(param_1 + 0x60));
    }
  }
  if ((*(int *)(param_1 + 0x6c) == 0) ||
     (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2 == 0)) {
    if (!bVar15) {
      ExceptionList = pvStack_c;
      return;
    }
    bVar5 = 3;
  }
  else if (bVar15) {
    bVar5 = 3;
  }
  else {
    bVar5 = -bVar4 & 2;
  }
  iVar10 = FUN_0070db50(bVar5);
  if (0 < iVar10) {
    uVar14 = FUN_0071d730(iStack_34);
    iVar11 = DAT_00911fbc;
    if ((DAT_00993cc8 != 0) &&
       (*(int *)(*(int *)(DAT_00993cc8 + 0x238) + 0x18) !=
        *(int *)(*(int *)(DAT_00993cc8 + 0x238) + 0x2c))) {
      iVar11 = FUN_00465fd0(1,0);
    }
    uStack_4 = 0;
    if (iVar11 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_00707900(iVar10,uVar9,iStack_34,uVar14);
    }
    uStack_4 = 0xffffffff;
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3;
    }
    (**(code **)(*piVar7 + 0x1c0))(iVar11);
    FUN_004cf6b0(unaff_EBX,piVar7);
    FUN_00712b70(iVar10);
LAB_0071fe2a:
    (**(code **)(*piVar7 + 0x54))();
    *(int **)(param_1 + 0x100) = piVar7;
    if ((((*(int *)(param_1 + 0x1d4) == 0) || (*(int *)(param_1 + 0x1d4) == 1)) && (!bVar4)) &&
       (*(int *)(param_1 + 0x138) == 2)) {
      fVar16 = (float10)FUN_0045da70(0x3f800000);
      if ((float10)_DAT_008b0e70 < fVar16) {
        (**(code **)(**(int **)(param_1 + 0x100) + 0xf4))();
        ExceptionList = pvStack_c;
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x100) + 0x9c))();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

