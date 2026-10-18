/* speed.exe 004299b0 FUN_004299b0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005e8b20 FUN_005e8b20
 * calls 005d59f0 FUN_005d59f0
 * calls 00401ae0 FUN_00401ae0
 * calls 0040e080 FUN_0040e080
 * calls 006e8de0 FUN_006e8de0
 * calls 0040e020 FUN_0040e020
 * calls 005edb50 FUN_005edb50
 * calls 00423860 FUN_00423860
 * calls 006269b0 FUN_006269b0
 * calls 005fdda0 FUN_005fdda0
 * calls 00410180 FUN_00410180
 * calls 007c4b80 FUN_007c4b80
 * calls 00407cc0 FUN_00407cc0
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004299b0(int param_1,int param_2,int *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  bool bVar16;
  float10 fVar17;
  int iStack_2c;
  float fStack_28;
  int *apiStack_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00868188;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar17 = (float10)FUN_006e8de0();
  piVar11 = param_4;
  piVar12 = param_3;
  fVar1 = (float)fVar17;
  if (*(int *)(param_1 + -0x72c) == 0) {
    bVar16 = true;
    if (param_3 != (int *)0x0) goto LAB_00429a07;
  }
  else if (param_3 == (int *)0x0) {
LAB_00429a07:
    bVar16 = false;
  }
  else {
    bVar16 = *(int *)(*(int *)(param_1 + -0x72c) + 4) == param_3[1];
  }
  iVar8 = (**(code **)(*param_4 + 4))();
  fStack_28 = fVar1;
  if (!bVar16) {
    fVar17 = (float10)(**(code **)(*piVar12 + 0x8c))();
    fStack_28 = (float)fVar17;
  }
  iVar6 = param_2;
  bVar4 = false;
  iStack_2c = 0;
  bVar5 = false;
  if (iVar8 == 2) {
    iVar2 = piVar11[2];
    if ((iVar2 == *(int *)(param_2 + 0x3c)) && ((*(byte *)(param_2 + 0x1c) & 8) != 0)) {
      ExceptionList = pvStack_c;
      return;
    }
    if ((iVar2 == *(int *)(param_2 + 0x4c)) && ((*(byte *)(param_2 + 0x1c) & 0x20) != 0)) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  if (fVar1 - fStack_28 < _DAT_00890d3c != (fVar1 - fStack_28 == _DAT_00890d3c)) {
    piVar9 = (int *)(**(code **)(*(int *)(param_1 + -0x714) + 0xa0))();
    piVar12 = param_4;
    if (iVar8 == 2) {
      uVar10 = (**(code **)(*param_4 + 0x44))();
      FUN_00407cc0(uVar10);
      uStack_4 = 0;
      piVar11 = (int *)FUN_00454810(0x6db7d192,0);
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)FUN_006269b0(4);
      }
      iStack_2c = *piVar11;
      piVar12 = (int *)(**(code **)(*piVar12 + 0x80))();
      if (((((piVar12 != (int *)0x0) && (cVar7 = (**(code **)(*piVar12 + 0x54))(), cVar7 != '\0'))
           && (bVar16)) &&
          ((piVar9 != (int *)0x0 && (cVar7 = (**(code **)(*piVar9 + 0x28))(), cVar7 != '\0')))) &&
         ((cVar7 = (**(code **)(*piVar9 + 0x8c))(), cVar7 != '\0' &&
          (fVar17 = (float10)(**(code **)(*piVar9 + 0x128))(), fVar17 < (float10)_DAT_00890dc0)))) {
        FUN_005fdda0(0x20);
      }
      piVar12 = (int *)(**(code **)(**(int **)(param_1 + -0x72c) + 0x20))();
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0x4c))(0);
      }
      if (*(int **)(param_1 + -0x684) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + -0x684) + 0x30))(0);
      }
      uStack_4 = 0xffffffff;
      FUN_0045a430();
    }
    else {
      piVar11 = param_4;
      if (iVar8 != 1) goto LAB_00429eba;
      fVar17 = (float10)FUN_00410180(iVar6 + 0x20);
      apiStack_24[0] = (int *)(float)fVar17;
      param_2 = CONCAT31(param_2._1_3_,1);
      if (fVar17 <= (float10)_DAT_00890e98) {
        param_2 = (uint)param_2._1_3_ << 8;
      }
      if (bVar16) {
        iVar8 = (**(code **)(*param_3 + 0x34))();
        if (iVar8 == *(int *)(iVar6 + 0x3c)) {
          pfVar14 = (float *)(iVar6 + 0x50);
          pfVar13 = (float *)(iVar6 + 0x60);
          fVar3 = _DAT_0089096c;
        }
        else {
          pfVar14 = (float *)(iVar6 + 0x60);
          pfVar13 = (float *)(iVar6 + 0x50);
          fVar3 = _DAT_00890da8;
        }
        bVar5 = true;
        if ((*pfVar14 * *(float *)(iVar6 + 0x10) +
            *(float *)(iVar6 + 0x14) * pfVar14[1] + *(float *)(iVar6 + 0x18) * pfVar14[2]) * fVar3 *
            _DAT_00890da8 <=
            (*(float *)(iVar6 + 0x10) * *pfVar13 +
            *(float *)(iVar6 + 0x14) * pfVar13[1] + *(float *)(iVar6 + 0x18) * pfVar13[2]) * fVar3)
        {
          bVar5 = false;
        }
      }
      piVar12 = (int *)FUN_005d59f0(&LAB_004040e0);
      piVar11 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar11 != (int *)0x0) {
        cVar7 = (**(code **)(*piVar11 + 0x6c))();
        if ((((cVar7 == '\0') && (bVar16)) && ((char)param_2 != '\0')) &&
           ((**(code **)(*piVar11 + 0x68))(1), piVar9 != (int *)0x0)) {
          (**(code **)(*piVar9 + 0xf0))(piVar12);
          cVar7 = (**(code **)(*piVar9 + 0x8c))();
          if ((cVar7 != '\0') && (bVar5)) {
            FUN_005fdda0(8);
          }
        }
        cVar7 = (**(code **)(*piVar12 + 0x7c))();
        if (cVar7 == '\0') {
          if (bVar5) {
            uVar15 = 2000;
LAB_00429cfb:
            FUN_00401ae0(apiStack_24[0],0x40800000,0x41f00000);
            apiStack_24[0] = (int *)(uVar15 / 0x32);
            iStack_2c = FUN_007c4b80();
            iStack_2c = iStack_2c * 0x32;
            if (iStack_2c < 0x33) {
              iStack_2c = 0x32;
            }
            if (!bVar16) goto LAB_00429dc7;
          }
          else if (!bVar16) {
            uVar15 = 500;
            goto LAB_00429cfb;
          }
          cVar7 = (**(code **)(*piVar11 + 0x14))();
          if (((cVar7 == '\0') &&
              (cVar7 = FUN_0040e020(apiStack_24), piVar12 = apiStack_24[0], cVar7 != '\0')) &&
             (iVar8 = (**(code **)(*apiStack_24[0] + 100))(), *(char *)(iVar8 + 0x2c) == '\0')) {
            piVar11 = (int *)(**(code **)(*(int *)(param_1 + -0x714) + 8))();
            iVar8 = (**(code **)(*piVar11 + 0x58))();
            if ((((iVar8 == 0) || (iVar8 == 6)) ||
                ((DAT_0092c67c != (int *)0x0 &&
                 (cVar7 = (**(code **)(*DAT_0092c67c + 0x24))(), cVar7 != '\0')))) && (bVar5)) {
              piVar11 = param_3;
              (**(code **)(*piVar12 + 100))(param_3);
              FUN_00423860(piVar11);
            }
          }
        }
      }
LAB_00429dc7:
      if ((((char)param_2 != '\0') && (bVar5)) && (cVar7 = FUN_0040e080(&param_2), cVar7 != '\0')) {
        *(float *)(param_1 + 0x5c) = fVar1;
        FUN_005edb50("insurance_claims");
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xf8))();
        }
        if ((DAT_0091e000 != 0) && (iVar8 = FUN_005e8b20(param_3), iVar8 != 0)) {
          *(int *)(iVar8 + 0x118) = *(int *)(iVar8 + 0x118) + 1;
        }
        if (((piVar9 != (int *)0x0) && (cVar7 = (**(code **)(*piVar9 + 0x28))(), cVar7 != '\0')) &&
           ((cVar7 = (**(code **)(*piVar9 + 0x8c))(), cVar7 != '\0' &&
            (fVar17 = (float10)(**(code **)(*piVar9 + 0x128))(), fVar17 < (float10)_DAT_00890dc0))))
        {
          FUN_005fdda0(0x10);
        }
      }
      bVar4 = !bVar5;
    }
    if ((iStack_2c != 0) && (piVar9 != (int *)0x0)) {
      (**(code **)(*(int *)(param_1 + -8) + 0x18))(iStack_2c);
    }
    piVar11 = param_4;
    if (bVar4) {
      param_3 = (int *)0x0;
      goto LAB_00429ec2;
    }
  }
LAB_00429eba:
  param_3 = (int *)fStack_28;
LAB_00429ec2:
  (**(code **)(*piVar11 + 0x84))(*(undefined4 *)(param_1 + 8),param_3);
  ExceptionList = pvStack_c;
  return;
}

