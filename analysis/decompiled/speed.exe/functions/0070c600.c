/* speed.exe 0070c600 FUN_0070c600; analysis pseudocode, not buildable source.
 * calls 004cb460 FUN_004cb460
 * calls 00452430 FUN_00452430
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 006fe0d0 FUN_006fe0d0
 * calls 006fe0f0 FUN_006fe0f0
 * calls 0041ad40 FUN_0041ad40
 * calls 006ff320 FUN_006ff320
 * calls 006269b0 FUN_006269b0
 * calls 004cb3f0 FUN_004cb3f0
 * calls 004cb480 FUN_004cb480
 * calls 004cb270 FUN_004cb270
 * calls 0040e1a0 FUN_0040e1a0
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0070c600(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  short sVar13;
  uint uVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_2c;
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar2 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fb38;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return 2;
  }
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_004cb3f0(*(undefined4 *)((int)param_1 + 8));
  uVar17 = 0;
  uVar16 = 0;
  uVar5 = FUN_004cb270(*(undefined4 *)(iVar2 + 8));
  FUN_004b8880(uVar5,uVar16,uVar17);
  iVar1 = DAT_00993cc8;
  local_4 = 0;
  if ((*(byte *)(iVar2 + 0x3e) & 2) != 0) {
    pfVar6 = (float *)FUN_00454810(0xffbdad32,0);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    param_1 = (int *)(DAT_00925ae8 - *(int *)(iVar2 + 0x10));
    if ((float)(int)param_1 * _DAT_00890984 < *pfVar6) {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 4;
    }
    *(int *)(iVar2 + 0x10) = DAT_00925ae8;
    *(byte *)(iVar2 + 0x3e) = *(byte *)(iVar2 + 0x3e) & 0xfd;
  }
  param_1 = (int *)(DAT_00925ae8 - *(int *)(iVar2 + 0x10));
  if ((*(float *)(local_2c + 0xc) < (float)(int)param_1 * _DAT_00890984) && ((param_2 & 1) != 0)) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 2;
  }
  piVar7 = (int *)FUN_00454810(0x7e18c2f8,0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_006269b0(4);
  }
  if ((-1 < *piVar7) && ((param_2 & 2) != 0)) {
    piVar7 = (int *)FUN_00454810(0x7e18c2f8,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)FUN_006269b0(4);
    }
    iVar8 = FUN_004cb460(*(undefined4 *)(iVar2 + 8));
    if (*piVar7 < iVar8) {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 2;
    }
  }
  if ((param_2 & 4) != 0) {
    pfVar6 = (float *)FUN_00454810(0x793293dd,0);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    if (_DAT_00890968 < *pfVar6) {
      pfVar6 = (float *)FUN_00454810(0x793293dd,0);
      if (pfVar6 == (float *)0x0) {
        pfVar6 = (float *)FUN_006269b0(4);
      }
      if (_DAT_00992258 < *pfVar6) goto LAB_0070c826;
    }
  }
  if (((((short)piVar4[1] != 0) && ((param_2 & 8) != 0)) &&
      (param_1 = (int *)(DAT_00925ae8 - *piVar4),
      (float)(int)param_1 * _DAT_00890984 < *(float *)(local_2c + 0x14))) ||
     (((*(int **)(iVar2 + 0xc) != (int *)0x0 &&
       (fVar15 = (float10)(**(code **)(**(int **)(iVar2 + 0xc) + 0x58))(),
       (float10)*(float *)(local_2c + 0x10) < fVar15)) && ((param_2 & 0x10) != 0))))
  goto LAB_0070c826;
  iVar8 = FUN_006fe0f0();
  if ((iVar8 != 0) && ((param_2 & 0x20) != 0)) {
    if (*(float *)(local_2c + 8) <= _DAT_00890968) {
      if (DAT_009933ec != 0) {
        iVar8 = FUN_004cb270(*(undefined4 *)(*DAT_009933e8 + 8));
        uVar14 = 0;
        iVar10 = FUN_006fe0f0();
        if (iVar10 != 0) {
          do {
            iVar10 = FUN_006fe0d0(uVar14);
            FUN_004b8880(*(undefined4 *)(iVar10 + 4),0,0);
            local_4._0_1_ = 2;
            cVar3 = FUN_006ff320(*(undefined4 *)(iStack_18 + 4));
            iVar10 = FUN_00452430();
            if ((iVar10 == iVar8) || (cVar3 != '\0')) {
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_0045a430();
              goto LAB_0070ca78;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0045a430();
            uVar14 = uVar14 + 1;
            uVar9 = FUN_006fe0f0();
          } while (uVar14 < uVar9);
        }
      }
    }
    else {
      uVar14 = 0;
      iVar8 = FUN_006fe0f0();
      if (iVar8 != 0) {
        do {
          iVar8 = FUN_00454810(0xc8c5d475,uVar14);
          if (iVar8 == 0) {
            iVar8 = FUN_006269b0(0xc);
          }
          FUN_004b8880(*(undefined4 *)(iVar8 + 4),0,0);
          local_4._0_1_ = 1;
          FUN_004cb480(&param_1,*(undefined4 *)(iStack_18 + 4));
          iVar8 = FUN_004cb460(*(undefined4 *)(iStack_18 + 4));
          if (((DAT_00992230 == 0) || (*(int *)(DAT_00992230 + 0x88) == 0)) ||
             (*(int *)(*(int *)(DAT_00992230 + 0x88) + 8) != *(int *)(iStack_18 + 4))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((((float)(DAT_00925ae8 - (int)param_1) * _DAT_00890984 < *(float *)(local_2c + 8)) &&
              (0 < iVar8)) || (bVar12)) {
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0045a430();
            goto LAB_0070ca78;
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0045a430();
          uVar14 = uVar14 + 1;
          uVar9 = FUN_006fe0f0();
        } while (uVar14 < uVar9);
      }
    }
    goto LAB_0070c826;
  }
LAB_0070ca78:
  pcVar11 = (char *)FUN_00454810(0x4b331604,0);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)FUN_006269b0(1);
  }
  if (((*pcVar11 != '\0') && ((param_2 & 0x40) != 0)) && (*(int **)(iVar2 + 0xc) != (int *)0x0)) {
    param_1 = (int *)0x0;
    uVar5 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x28))();
    iVar8 = FUN_0041ad40(uVar5);
    if (((iVar8 != 0) && (FUN_0040e1a0(&param_1), param_1 != (int *)0x0)) &&
       (cVar3 = (**(code **)(*param_1 + 4))(), cVar3 == '\0')) goto LAB_0070c826;
  }
  pcVar11 = (char *)FUN_00454810(0xe0241fc1,0);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)FUN_006269b0(1);
  }
  if (((*pcVar11 != '\0') && ((char)param_2 < '\0')) &&
     ((*(int **)(iVar2 + 0xc) != (int *)0x0 &&
      (cVar3 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x70))(), cVar3 == '\0')))) goto LAB_0070c826;
  uVar5 = *(undefined4 *)(iVar1 + 0x104);
  pcVar11 = (char *)FUN_00454810(0x77f20778,0);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)FUN_006269b0(1);
  }
  sVar13 = (short)uVar5;
  if (*pcVar11 < sVar13) {
LAB_0070cb77:
    if ((param_2 & 0x100) != 0) goto LAB_0070c826;
  }
  else {
    pcVar11 = (char *)FUN_00454810(0x69603485,0);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)FUN_006269b0(1);
    }
    if (sVar13 < *pcVar11) goto LAB_0070cb77;
  }
  param_1 = (int *)ABS(*(float *)(iVar1 + 0x108));
  pfVar6 = (float *)FUN_00454810(0x994e624,0);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)FUN_006269b0(4);
  }
  if (*pfVar6 <= (float)param_1) {
    pfVar6 = (float *)FUN_00454810(0xb9befde0,0);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    if ((float)param_1 <= *pfVar6) goto LAB_0070cbf3;
  }
  if ((param_2 & 0x200) != 0) {
LAB_0070c826:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 4;
  }
LAB_0070cbf3:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

