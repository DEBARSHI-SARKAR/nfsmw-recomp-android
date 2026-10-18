/* speed.exe 0074e160 FUN_0074e160; analysis pseudocode, not buildable source.
 * calls 00747ac0 FUN_00747ac0
 * calls 00502130 FUN_00502130
 * calls 00405e80 FUN_00405e80
 * calls 00502580 FUN_00502580
 * calls 006bdc60 FUN_006bdc60
 * calls 007329f0 FUN_007329f0
 * calls 006bdbb0 FUN_006bdbb0
 * calls 00516e10 FUN_00516e10
 * calls 00743ea0 FUN_00743ea0
 * calls 00404db0 FUN_00404db0
 * calls 006bf530 FUN_006bf530
 * calls 007422d0 FUN_007422d0
 * calls 00466980 FUN_00466980
 * calls 00444fe0 FUN_00444fe0
 * calls 00402090 FUN_00402090
 * calls 0045f340 FUN_0045f340
 * calls 0045fde0 FUN_0045fde0
 * calls 005028a0 FUN_005028a0
 * calls 0045f680 FUN_0045f680
 * calls 007387e0 FUN_007387e0
 * calls 00732280 FUN_00732280
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 00466af0 FUN_00466af0
 * calls 00466a60 FUN_00466a60
 * calls 0045c8f0 FUN_0045c8f0
 * calls 00463a20 FUN_00463a20
 * calls 00466f20 FUN_00466f20
 * calls 00738440 FUN_00738440
 * calls 004450c0 FUN_004450c0
 * calls 00501640 FUN_00501640
 * calls 004fcac0 FUN_004fcac0
 * calls 0045e300 FUN_0045e300
 * calls 006bd900 FUN_006bd900
 * calls 00444fa0 FUN_00444fa0
 * calls 00460bf0 FUN_00460bf0
 * calls 00737e30 FUN_00737e30
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 00516e20 FUN_00516e20
 * calls 007c4b80 FUN_007c4b80
 * calls 00445090 FUN_00445090
 * calls 006da9b0 FUN_006da9b0
 * calls 004fb6e0 FUN_004fb6e0
 * calls 00405ed0 FUN_00405ed0
 * calls 004fc6c0 FUN_004fc6c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0074e160(int param_1,int param_2,float *param_3,undefined4 param_4,undefined1 *param_5,
            undefined1 *param_6,undefined4 param_7,uint param_8,undefined4 param_9,int param_10,
            undefined4 param_11)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined *puVar16;
  uint uVar17;
  float *pfVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  bool bVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar28;
  float10 extraout_ST1;
  uint uVar29;
  int iVar30;
  undefined4 uVar31;
  int *local_604;
  int local_600;
  uint local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint uStack_5ec;
  int local_5e8;
  int iStack_5e4;
  undefined1 *puStack_5e0;
  int iStack_5dc;
  undefined4 *local_5d8;
  undefined1 *puStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  float local_5c0;
  uint *local_5bc;
  int local_5b8;
  undefined *puStack_5b4;
  undefined1 auStack_5b0 [48];
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  uint local_568;
  uint local_564;
  uint auStack_560 [4];
  float local_550;
  float local_54c;
  float local_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 auStack_530 [5];
  undefined4 uStack_51c;
  undefined4 uStack_508;
  float fStack_500;
  undefined1 auStack_4f0 [48];
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined1 local_4b0 [8];
  float local_4a8;
  undefined1 auStack_490 [16];
  float afStack_480 [16];
  undefined1 auStack_440 [64];
  undefined1 auStack_400 [64];
  undefined1 auStack_3c0 [64];
  float afStack_380 [16];
  undefined1 auStack_340 [64];
  undefined1 auStack_300 [64];
  undefined1 auStack_2c0 [64];
  float afStack_280 [16];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [64];
  undefined1 local_180 [64];
  undefined1 local_140 [316];
  
  local_54c = param_3[1];
  local_550 = *param_3;
  local_548 = param_3[2];
  if ((*(int *)(param_1 + 0x88) != 0) && (*(int *)(*(int *)(param_1 + 0x88) + 0x94) == 1)) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  local_600 = FUN_004fcac0(&local_550,*(undefined4 *)(param_1 + 0x17a8));
  if (*(int *)(param_2 + 4) == 0xf) {
    local_600 = FUN_004fcac0(&local_550,*(undefined4 *)(param_1 + 0x17a8));
  }
  iVar10 = FUN_006bf530();
  if ((iVar10 == 3) && (DAT_00925e90 != 3)) {
    local_600 = FUN_007c4b80();
  }
  if (((local_600 < *(int *)(param_2 + 0x24)) && (*(int *)(param_2 + 4) != 0xf)) &&
     (*(int *)(param_2 + 4) != 0x10)) {
    return 0;
  }
  if (DAT_00903320 == 0) {
    return 1;
  }
  local_5c0 = *(float *)(param_2 + 0x40);
  if (*(int *)(param_1 + 0x88) == 0) {
    bVar24 = false;
  }
  else {
    bVar24 = *(int *)(*(int *)(param_1 + 0x88) + 0x94) == 2;
  }
  if (DAT_00915f84 + 0x130 < DAT_00915f88) {
    local_5f4 = DAT_00915f84;
    DAT_00915f84 = DAT_00915f84 + 0x130;
  }
  else {
    DAT_00915f98 = DAT_00915f98 + 0x130;
    DAT_00915f94 = 1;
    local_5f4 = 0;
  }
  puVar11 = (uint *)FUN_00405ed0(1);
  local_5bc = puVar11;
  iVar10 = FUN_00405ed0(1);
  iVar12 = FUN_00405ed0(1);
  iVar13 = FUN_00405ed0(1);
  if (local_5f4 == 0) {
    return 0;
  }
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  if (iVar12 == 0) {
    return 0;
  }
  if (iVar13 == 0) {
    return 0;
  }
  FUN_00444fe0(puVar11,param_4);
  FUN_006bd900(puVar11,&DAT_009b34b0,puVar11);
  puVar11[0xc] = (uint)local_550;
  puVar11[0xd] = (uint)local_54c;
  puVar11[0xe] = (uint)local_548;
  puVar11[0xf] = 0x3f800000;
  iVar14 = thunk_FUN_006cf2b0(param_1 + 0x90,param_1 + 0xa0,puVar11);
  if (iVar14 == 0) {
    return 0;
  }
  local_540 = *(undefined4 *)((int)local_5c0 + 0x40);
  local_53c = *(undefined4 *)((int)local_5c0 + 0x44);
  local_538 = *(undefined4 *)((int)local_5c0 + 0x48);
  local_568 = (uint)(DAT_00925e90 == 3);
  local_534 = 0x3f800000;
  if (DAT_009b0940 != 0) {
    _DAT_00916008 = 1;
  }
  local_5c0 = (float)((int)local_5c0 + 0x40);
  FUN_00444fe0(iVar10,param_4);
  *(float *)(iVar10 + 0x30) = local_550;
  *(float *)(iVar10 + 0x34) = local_54c;
  *(float *)(iVar10 + 0x38) = local_548;
  *(undefined4 *)(iVar10 + 0x3c) = 0x3f800000;
  FUN_004fc6c0(local_140);
  FUN_00516e10();
  uVar15 = FUN_00516e20();
  switch(uVar15) {
  case 2:
    puVar16 = &DAT_008f2dd0;
    break;
  case 3:
    puVar16 = &DAT_008f2c90;
    break;
  case 4:
    puVar16 = &DAT_008f2b50;
    break;
  case 5:
    puVar16 = &DAT_008f2bf0;
    break;
  default:
    puVar16 = &DAT_008f2d30;
  }
  if (DAT_00925e90 == 6) {
    puVar16 = &DAT_008f2e70;
  }
  FUN_00502130(local_140,puVar16,&local_550,0,&DAT_00987fc0,param_2);
  FUN_00502580(local_5f4,iVar10,&DAT_00987fc0,&local_540,param_2,local_140);
  *(undefined4 *)(param_1 + 0x100) = DAT_00982b78;
  if (DAT_009b0940 != 0) {
    _DAT_00916008 = 0;
  }
  FUN_00737e30();
  local_5f8 = 0;
  local_564 = 0;
  if ((DAT_008f9334 == 0) || ((float)local_600 < _DAT_008b2ee4)) {
    local_5f8 = 1;
    local_564 = 1;
  }
  iVar10 = 0;
  iVar14 = 0;
  if (bVar24) {
    param_8 = 0x80000;
LAB_0074e51d:
    if ((float)local_600 < _DAT_008b2f7c) {
      do {
        iVar10 = iVar10 + 1;
        iVar14 = iVar14 + 1;
      } while ((float)local_600 < *(float *)(&UNK_008b2ed0 + iVar10 * 4));
    }
  }
  else {
    if (*(int *)(param_1 + 0x1628) == 2) goto LAB_0074e51d;
    if ((float)local_600 < _DAT_008970c0) {
      do {
        iVar10 = iVar10 + 1;
        iVar14 = iVar14 + 1;
      } while ((float)local_600 < *(float *)(&UNK_008b2ebc + iVar10 * 4));
    }
  }
  iVar30 = *(int *)(param_1 + 0x1628);
  iVar6 = *(int *)(param_1 + 0x162c);
  local_5fc = iVar30 + iVar10;
  if (iVar6 <= iVar30 + iVar10) {
    local_5fc = iVar6;
  }
  local_5b8 = iVar30 + iVar14;
  if (iVar6 <= iVar30 + iVar14) {
    local_5b8 = iVar6;
  }
  if (DAT_00903384 != -1) {
    local_5fc = FUN_00402090(DAT_00903384,iVar30,iVar6);
  }
  if (DAT_00903388 != -1) {
    local_5b8 = FUN_00402090(DAT_00903388,iVar30,iVar6);
  }
  puVar11 = local_5bc;
  if ((local_5fc == -1) && (local_5b8 == -1)) {
    return 0;
  }
  uVar17 = param_8;
  if (((*(int **)(param_1 + 0x84) != (int *)0x0) &&
      (*(int *)(**(int **)(param_1 + 0x84) * 0xd0 + 0x94 + DAT_009b09d8) != 0)) &&
     (uVar17 = param_8 | 0x800, DAT_009885c8 != (int *)0x0)) {
    uVar17 = param_8 | 0x80800;
  }
  param_8 = uVar17;
  FUN_0045e300(local_180,local_5bc);
  fVar1 = local_5c0;
  thunk_FUN_006bd940(local_4b0,local_180,local_5c0);
  fVar25 = (float10)FUN_0045f340(fVar1,puVar11 + 0xc);
  fVar1 = (float)fVar25;
  if (((local_5fc == 0) && (fVar1 < _DAT_00890e98)) &&
     ((*(int *)(param_2 + 4) == 1 && (DAT_009885c8 == (int *)0x0)))) {
    local_4a8 = local_4a8 + _DAT_008933d4;
    iVar10 = FUN_0045fde0(param_1 + 0x90,param_1 + 0xa0,local_4b0,0);
    if (iVar10 != 0) {
      return 0;
    }
    local_4a8 = local_4a8 - _DAT_008933d4;
  }
  if ((*(char *)(param_1 + 0x17c0) == '\x01') && (_DAT_00890968 < *(float *)(param_1 + 0x17c4))) {
    return 1;
  }
  FUN_00444fe0(iVar12,puVar11);
  FUN_00466a60(iVar13,&DAT_00987ab0,&local_550);
  if (DAT_009885c8 != (int *)0x0) {
    (**(code **)(*DAT_009885c8 + 0x3c))();
  }
  if (param_10 == 0) {
    *(float *)(iVar12 + 0x38) = *(float *)(iVar12 + 0x38) + _DAT_00890dc4;
    fVar1 = (fVar1 - _DAT_00890cd4) / fVar1;
    if (local_568 != 0) {
      FUN_005028a0(iVar12,fVar1);
    }
    FUN_005028a0(iVar13,fVar1);
    FUN_004450c0(auStack_4f0);
    fStack_4c0 = -local_550;
    fStack_4bc = -local_54c;
    fStack_4b8 = -local_548;
    FUN_006bd900(iVar13,auStack_4f0,iVar13);
  }
  uVar5 = *(ushort *)(param_1 + 0x1180);
  uVar21 = *(ushort *)(param_1 + 0x1182);
  uVar19 = uVar5;
  if (0x8000 < uVar5) {
    uVar19 = -uVar5;
  }
  uVar20 = uVar21;
  if (0x8000 < uVar21) {
    uVar20 = -uVar21;
  }
  if (uVar20 < uVar19) {
    uVar21 = uVar5;
  }
  FUN_007422d0(local_4b0,uVar21);
  if (((DAT_00903328 != 0) && (param_10 == 0)) && (*(int *)(param_2 + 4) == 1)) {
    FUN_00743ea0(param_2,&local_550,param_11,local_5bc,local_180,iVar13);
  }
  if ((DAT_00925e90 != 6) || (uStack_5ec = 0x8000, *(int *)(param_2 + 4) == 3)) {
    uStack_5ec = 0;
  }
  if (((*(int *)(param_2 + 4) != 1) && (*(int *)(param_2 + 4) != 2)) ||
     (DAT_00925970 <= _DAT_00890968)) {
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(iVar12);
    }
  }
  else if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0xc))(iVar12);
  }
  if ((*(int *)(param_1 + 0x88) != 0) && (*(int *)(*(int *)(param_1 + 0x88) + 0x94) == 1)) {
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  }
  iVar10 = *(int *)(param_1 + 0xd8);
  iStack_5dc = *(int *)(param_1 + 0xec);
  if (*(int *)(param_1 + 0xec) == 0) {
    iStack_5dc = iVar10;
  }
  puStack_5e0 = (undefined1 *)*(int *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0xf0) == 0) {
    puStack_5e0 = (undefined1 *)iVar10;
  }
  local_5c0 = *(float *)(param_1 + 0xe0);
  iStack_5e4 = 0;
  do {
    iVar13 = FUN_00405e80(0x40);
    if (iVar13 == 0) goto switchD_0074e963_caseD_18;
    FUN_00445090(iVar12);
    puVar11 = (uint *)(param_1 + 0xb84 + iStack_5e4 * 0x14 + local_5fc * 4);
    uVar17 = *puVar11;
    local_5bc = puVar11;
    if (((uVar17 & 0xfffffffc) == 0) || ((uVar17 & 1) != 0)) goto switchD_0074e963_caseD_18;
    switch(iStack_5e4) {
    case 0x18:
    case 0x22:
    case 0x2c:
    case 0x3e:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      break;
    default:
      piVar7 = *(int **)(param_1 + 0x84);
      uVar17 = (uint)*(char *)((int)piVar7 + iStack_5e4 + 0x274);
      switch(iStack_5e4) {
      case 1:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x23:
      case 0x24:
      case 0x25:
        if (DAT_00903310 == '\0') goto switchD_0074e963_caseD_18;
      }
      local_5e8 = iVar10;
      switch(iStack_5e4) {
      case 0xd:
      case 0xe:
      case 0x15:
      case 0x16:
        if (*piVar7 == 0x33) {
          iVar14 = 0;
          if (iStack_5e4 != 0x15) {
            if (iStack_5e4 == 0xd) {
              iVar14 = 1;
            }
            else if (iStack_5e4 == 0xe) {
              iVar14 = 2;
            }
            else if (iStack_5e4 == 0x16) {
              iVar14 = 3;
            }
          }
          if ((float)(&DAT_009ae8a0)[iVar14] == _DAT_00890968) {
            FUN_006bd900(iVar13,&DAT_009b2800 + iVar14 * 0x10,iVar12);
          }
          else if ((&DAT_009ae8a0)[iVar14] == 0x3f800000) {
            FUN_006bd900(iVar13,&DAT_009b2af0 + iVar14 * 0x10,iVar12);
          }
          else {
            FUN_00732280(&DAT_009b2af0 + iVar14 * 0x10);
            FUN_00732280(&DAT_009b2800 + iVar14 * 0x10);
            FUN_00463a20(auStack_490,&uStack_5d0,(&DAT_009ae8a0)[iVar14]);
            FUN_00466980(&DAT_009b2b20 + iVar14 * 0x10);
            FUN_0045c8f0(auStack_560,auStack_560,(&DAT_009ae8a0)[iVar14]);
            FUN_0045f680(auStack_560,auStack_560,&DAT_009b2830 + iVar14 * 0x10,
                         _DAT_0089096c - (float)(&DAT_009ae8a0)[iVar14]);
            FUN_00466af0(auStack_4f0);
            FUN_00444fa0(auStack_560);
            FUN_006bd900(iVar13,auStack_4f0,iVar12);
            puVar11 = local_5bc;
          }
        }
        break;
      case 0x21:
      case 0x2a:
        goto switchD_0074ea00_caseD_21;
      case 0x2b:
        uVar17 = uVar17 & 1;
        if (DAT_00925e90 == 3) {
          uVar17 = 0;
        }
        if (*piVar7 == 0x33) {
          uVar17 = uVar17 & _DAT_009b0920;
        }
        else {
          uVar17 = uVar17 & _DAT_0090330c;
        }
        break;
      case 0x3f:
        if (*(int *)(param_1 + 0xf8) != 0) {
          local_5e8 = *(int *)(param_1 + 0xdc);
        }
      default:
        uVar17 = uVar17 & 1;
      }
      if (uVar17 != 0) {
switchD_0074ea00_caseD_21:
        FUN_00501640(0xd6d6080a,local_5e8);
        FUN_00501640(0x471a1dca,local_5c0);
        if ((*(int **)(param_1 + 0x40) == (int *)0x0) || (iStack_5e4 == 0x2b)) {
LAB_0074ec99:
          FUN_007387e0(param_2,puVar11,iVar13,local_5f4,uStack_5ec | local_5f8 | param_8);
        }
        else if (iStack_5e4 < 0x18) {
          uVar15 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(iStack_5e4);
          FUN_00445090(uVar15);
          cVar9 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(iStack_5e4);
          if (cVar9 == '\0') goto LAB_0074ec99;
        }
      }
      break;
    case 0x21:
    case 0x2a:
      if (param_10 == 0) {
        FUN_00501640(0xd6d6080a,*(undefined4 *)(param_1 + 0xd8));
        FUN_006da9b0(uVar17 & 0xfffffffc,iVar12,local_5f4,uStack_5ec | local_5f8 | param_8,0);
      }
    }
switchD_0074e963_caseD_18:
    iStack_5e4 = iStack_5e4 + 1;
  } while (iStack_5e4 < 0x4c);
  if (((int)local_5fc <= *(int *)(*(int *)(param_1 + 0x84) + 0x18)) || (param_10 != 0)) {
    FUN_00466f20(auStack_4f0);
    FUN_006bdc60(auStack_4f0,auStack_4f0,0x4000);
    local_604 = *(int **)(param_1 + 0x234);
    if (local_604 != (int *)(param_1 + 0x234)) {
      do {
        iVar10 = local_604[4];
        iVar13 = FUN_00405ed0(1);
        if (iVar13 != 0) {
          FUN_006bd900(iVar13,auStack_4f0,iVar10 + 0x10);
          FUN_006bd900(iVar13,iVar13,iVar12);
          uVar17 = *(uint *)(param_1 + 0x10e8 + *(int *)(param_1 + 0x1628) * 4) & 0xfffffffc;
          if (uVar17 != 0) {
            FUN_006da9b0(uVar17,iVar13,local_5f4,uStack_5ec | local_5f8 | param_8,0);
          }
        }
        local_604 = (int *)*local_604;
      } while (local_604 != (int *)(param_1 + 0x234));
    }
  }
  if (((int)local_5fc <= *(int *)(*(int *)(param_1 + 0x84) + 0x30)) &&
     (iVar10 = FUN_00405ed0(1), iVar10 != 0)) {
    iVar13 = *(int *)(*(int *)(param_1 + 0x84) + 0xf8);
    if (iVar13 != 0) {
      uVar31 = 0;
      uVar15 = FUN_00460bf0("USEMARKER2",0);
      iVar14 = FUN_00747ac0(uVar15,uVar31);
      if ((iVar14 != 0) && (*(int *)(param_1 + 0x1288) != 0)) {
        *(int *)(param_1 + 0x1284) = *(int *)(param_1 + 0x1288);
      }
    }
    if (((*(int *)(param_1 + 0x1284) == 0) || (iVar13 == 0)) || (*(byte *)(iVar13 + 5) >> 5 == 0)) {
      uVar17 = *(uint *)(param_1 + 0xef4 + local_5fc * 4) & 0xfffffffc;
      if (uVar17 != 0) {
        FUN_00501640(0xd6d6080a,iStack_5dc);
        iVar10 = iVar12;
        goto LAB_0074ee7d;
      }
    }
    else {
      uVar17 = *(uint *)(param_1 + 0xef4 + local_5fc * 4) & 0xfffffffc;
      if (uVar17 != 0) {
        FUN_006bd900(iVar10,*(int *)(param_1 + 0x1284) + 0x10,iVar12);
        FUN_00501640(0xd6d6080a,iStack_5dc);
LAB_0074ee7d:
        FUN_006da9b0(uVar17,iVar10,local_5f4,local_5f8 | param_8,0);
      }
    }
  }
  if (((int)local_5fc <= *(int *)(*(int *)(param_1 + 0x84) + 0x34)) &&
     (iVar10 = FUN_00405ed0(1), iVar10 != 0)) {
    if (*(int *)(param_1 + 0x128c) == 0) {
      uVar17 = *(uint *)(param_1 + 0x105c + local_5fc * 4) & 0xfffffffc;
      if (uVar17 != 0) {
        FUN_00501640(0xd6d6080a,puStack_5e0);
        iVar10 = iVar12;
        goto LAB_0074ef41;
      }
    }
    else {
      FUN_006bd900(iVar10,*(int *)(param_1 + 0x128c) + 0x10,iVar12);
      uVar17 = *(uint *)(param_1 + 0x105c + local_5fc * 4) & 0xfffffffc;
      if (uVar17 != 0) {
        FUN_00501640(0xd6d6080a,puStack_5e0);
LAB_0074ef41:
        FUN_006da9b0(uVar17,iVar10,local_5f4,uStack_5ec | local_5f8 | param_8,0);
      }
    }
  }
  FUN_00404db0(afStack_380,0x40,4,&LAB_00402350);
  FUN_00404db0(afStack_480,0x40,4,&LAB_00402350);
  FUN_00404db0(afStack_280,0x40,4,&LAB_00402350);
  fVar26 = (float10)_DAT_00903314;
  local_5c0 = *(float *)(param_1 + 0x154);
  fVar25 = (float10)_DAT_00890968;
  local_5bc = *(uint **)(param_1 + 0x150);
  fVar27 = (float10)_DAT_00890968;
  iStack_5dc = 0;
  iStack_5e4 = 0;
  if ((int)local_5fc < 2) {
    iStack_5dc = FUN_007c4b80();
    fVar26 = extraout_ST0 * (float10)_DAT_00890eac;
    iStack_5dc = iStack_5dc / 0x168;
    iStack_5e4 = FUN_007c4b80();
    fVar27 = extraout_ST0_00 * (float10)_DAT_00890eac;
    iStack_5e4 = iStack_5e4 / 0x168;
    fVar25 = extraout_ST1;
  }
  local_5d8 = (undefined4 *)(param_6 + 0x34);
  local_600 = 0;
  iVar10 = 0;
  puVar22 = (undefined4 *)(param_1 + 0x140);
  do {
    fVar8 = (float)puVar22[-0xc];
    fVar1 = (float)puVar22[-4];
    fVar28 = (float10)fVar1;
    uVar15 = *puVar22;
    fVar2 = (float)(fVar28 * (float10)*(float *)(param_1 + 0x120 + (uint)(1 < local_600) * 4) *
                   fVar26);
    puVar11 = (uint *)local_5c0;
    if (iVar10 < 0x80) {
      puVar11 = local_5bc;
    }
    *(undefined4 *)((int)afStack_380 + iVar10) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x14) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x28) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x3c) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10 + 4) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 8) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0xc) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x10) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x18) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x1c) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x20) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x24) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x2c) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x30) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x34) = 0;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x38) = 0;
    *(float *)((int)afStack_380 + iVar10 + 0x14) = fVar1;
    *(undefined4 *)((int)afStack_480 + iVar10) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10 + 0x28) = uVar15;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x14) = 0x3f800000;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x28) = 0x3f800000;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x3c) = 0x3f800000;
    *(float *)((int)afStack_380 + iVar10 + 0x34) = (float)-(float10)fVar2;
    *(undefined4 *)((int)afStack_280 + iVar10) = 0x3f800000;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x14) = 0x3f800000;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x28) = 0x3f800000;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x3c) = 0x3f800000;
    *(undefined4 *)((int)afStack_380 + iVar10) = uVar15;
    *(undefined4 *)((int)afStack_480 + iVar10 + 4) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 8) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0xc) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x10) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x18) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x1c) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x20) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x24) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x2c) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x30) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x34) = 0;
    *(undefined4 *)((int)afStack_480 + iVar10 + 0x38) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 4) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 8) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0xc) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x10) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x18) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x1c) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x20) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x24) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x2c) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x30) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x34) = 0;
    *(undefined4 *)((int)afStack_280 + iVar10 + 0x38) = 0;
    if (_DAT_00890968 <= fVar8) {
      fVar8 = fVar8 - fVar2;
    }
    else {
      fVar8 = fVar2 + fVar8;
    }
    *(float *)((int)afStack_480 + iVar10 + 0x34) = -fVar8;
    if ((float10)(float)puVar11 != (float10)_DAT_00890968) {
      *(float *)((int)afStack_280 + iVar10 + 0x34) =
           (float)((float10)(float)puVar11 * fVar28 + -(float10)fVar2);
    }
    fVar28 = fVar27;
    if (iVar10 < 0x80) {
      fVar28 = fVar25;
    }
    *(float *)((int)afStack_480 + iVar10 + 0x38) =
         (float)((float10)*(float *)((int)afStack_480 + iVar10 + 0x38) - fVar28);
    *(undefined4 *)((int)local_5d8 + ((int)param_5 - (int)param_6)) = 0;
    *local_5d8 = 0;
    local_600 = local_600 + 1;
    iVar10 = iVar10 + 0x40;
    local_5d8 = local_5d8 + 0x10;
    puVar22 = puVar22 + 1;
  } while (iVar10 < 0x100);
  piVar7 = *(int **)(param_1 + 0x84);
  local_5c0 = 0.0;
  local_5bc = (uint *)0x0;
  cVar9 = '\0';
  cVar3 = '\0';
  local_5f4 = 0;
  if (((*piVar7 != 4) && (*(char *)((int)piVar7 + 0x2b6) != '\0')) && ((int)local_5fc <= piVar7[10])
     ) {
    iVar10 = FUN_00405ed0(4);
    pfVar18 = (float *)FUN_007329f0();
    fVar1 = *pfVar18;
    local_604 = (int *)0x0;
    if (fVar1 != _DAT_00890968) {
      local_604 = (int *)FUN_00405ed0(2);
    }
    local_5f4 = FUN_00405e80(0x4c0);
    if ((iVar10 != 0) && (local_5f4 != 0)) {
      local_5c0 = (float)(uint)*(byte *)(param_1 + 0x1658);
      local_5bc = (uint *)(uint)*(byte *)(param_1 + 0x1678);
      cVar9 = *(char *)(param_1 + 0x1698);
      cVar3 = *(char *)(param_1 + 0x16b8);
      iVar13 = *(int *)(*(int *)(param_1 + 0x84) + 0x28);
      if (local_5b8 <= iVar13) {
        iVar13 = local_5b8;
      }
      auStack_560[0] = *(uint *)(param_1 + 0xe4);
      iVar14 = param_1 + 0x10ac + iVar13 * 4;
      local_600 = param_1 + 0x10c0 + iVar13 * 4;
      local_5b8 = iVar13;
      if ((iVar14 != 0) && (auStack_560[0] != 0)) {
        FUN_00501640(0x22719fa9,auStack_560[0]);
        FUN_00501640(0xfd102a92,auStack_560[0]);
        FUN_00501640(0x12049251,auStack_560[0]);
      }
      if ((local_600 != 0) && (auStack_560[0] != 0)) {
        FUN_00501640(0x22719fa9,auStack_560[0]);
        FUN_00501640(0xfd102a92,auStack_560[0]);
        FUN_00501640(0x12049251,auStack_560[0]);
      }
      puStack_5b4 = &DAT_009b3600;
      auStack_560[0] = 0;
      if (*(char *)(param_1 + 0x17d0) != '\0') {
        puStack_5b4 = &DAT_009b0bf0;
        auStack_560[0] = 0x40000;
      }
      if ((((*(char *)(param_1 + 0x17cc) != '\0') || (*(char *)(param_1 + 0x17cd) != '\0')) ||
          (*(char *)(param_1 + 0x17ce) != '\0')) || (*(char *)(param_1 + 0x17cf) != '\0')) {
        FUN_004450c0(auStack_4f0);
        FUN_006bdbb0(auStack_4f0,auStack_4f0,0x4fa);
      }
      if (local_5c0 != 0.0) {
        puStack_5e0 = param_5;
        if ((short)iStack_5dc != 0) {
          FUN_00444fe0(auStack_5b0,param_5);
          uStack_5d0 = uStack_580;
          uStack_5cc = uStack_57c;
          uStack_5c8 = uStack_578;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_574 = 0x3f800000;
          FUN_006bdbb0(auStack_5b0,auStack_5b0,iStack_5dc);
          uStack_580 = uStack_5d0;
          puStack_5e0 = auStack_5b0;
          uStack_57c = uStack_5cc;
          uStack_578 = uStack_5c8;
        }
        FUN_006bd900(auStack_530,afStack_380,puStack_5b4);
        if (*(char *)(param_1 + 0x17cc) != '\0') {
          FUN_006bd900(auStack_530,auStack_530,auStack_4f0);
        }
        FUN_006bd900(auStack_530,auStack_530,puStack_5e0);
        FUN_006bd900(auStack_530,auStack_530,afStack_480);
        FUN_006bd900(iVar10,auStack_530,iVar12);
        FUN_00502580(local_5f4,iVar10,&DAT_00987fc0,&local_540,param_2,local_140);
        FUN_007387e0(param_2,iVar14,iVar10,local_5f4,
                     auStack_560[0] | uStack_5ec | local_564 | param_8);
      }
      if (local_5bc != (uint *)0x0) {
        puStack_5e0 = param_5 + 0x40;
        if ((short)iStack_5dc != 0) {
          FUN_00444fe0(auStack_5b0,puStack_5e0);
          uStack_5d0 = uStack_580;
          uStack_5cc = uStack_57c;
          uStack_5c8 = uStack_578;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_574 = 0x3f800000;
          FUN_006bdbb0(auStack_5b0,auStack_5b0,-iStack_5dc);
          uStack_580 = uStack_5d0;
          puStack_5e0 = auStack_5b0;
          uStack_57c = uStack_5cc;
          uStack_578 = uStack_5c8;
        }
        if (*(char *)(param_1 + 0x17cd) == '\0') {
          FUN_00445090(auStack_340);
        }
        else {
          FUN_006bd900(auStack_530,auStack_340,auStack_4f0);
        }
        FUN_006bd900(auStack_530,auStack_530,puStack_5e0);
        FUN_006bd900(auStack_530,auStack_530,auStack_440);
        FUN_006bd900(iVar10 + 0x40,auStack_530,iVar12);
        FUN_00502580(local_5f4 + 0x130,iVar10 + 0x40,&DAT_00987fc0,&local_540,param_2,local_140);
        FUN_007387e0(param_2,iVar14,iVar10 + 0x40,local_5f4 + 0x130,uStack_5ec | local_564 | param_8
                    );
      }
      if (cVar9 != '\0') {
        puVar23 = param_5 + 0x80;
        if ((short)iStack_5e4 != 0) {
          FUN_00444fe0(auStack_5b0,puVar23);
          uStack_5d0 = uStack_580;
          uStack_5cc = uStack_57c;
          uStack_5c8 = uStack_578;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_574 = 0x3f800000;
          FUN_006bdbb0(auStack_5b0,auStack_5b0,-iStack_5e4);
          uStack_580 = uStack_5d0;
          uStack_57c = uStack_5cc;
          uStack_578 = uStack_5c8;
          puVar23 = auStack_5b0;
        }
        if (*(char *)(param_1 + 0x17ce) == '\0') {
          FUN_00445090(auStack_300);
        }
        else {
          FUN_006bd900(auStack_530,auStack_300,auStack_4f0);
        }
        FUN_006bd900(auStack_530,auStack_530,puVar23);
        FUN_006bd900(auStack_530,auStack_530,auStack_400);
        iVar13 = iVar10 + 0x80;
        FUN_006bd900(iVar13,auStack_530,iVar12);
        FUN_00502580(local_5f4 + 0x260,iVar13,&DAT_00987fc0,&local_540,param_2,local_140);
        if ((((local_568 == 0) && (DAT_009885c8 == (int *)0x0)) &&
            ((local_5b8 == *(int *)(param_1 + 0x1628) &&
             ((fVar25 = (float10)FUN_00738440(iVar13,param_2), fVar25 < (float10)_DAT_009b0994 &&
              (*(int *)(param_1 + 0x1628) + 1 <= *(int *)(param_1 + 0x162c))))))) &&
           (iVar13 = param_1 + 0x10c4 + *(int *)(param_1 + 0x1628) * 4, iVar13 != 0)) {
          local_600 = iVar13;
        }
        uVar17 = uStack_5ec | local_564 | param_8;
        FUN_007387e0(param_2,local_600,iVar10 + 0x80,local_5f4 + 0x260,uVar17);
        if (local_604 != (int *)0x0) {
          fStack_500 = fStack_500 + fVar1;
          FUN_006bd900(local_604,auStack_530,iVar12);
          FUN_007387e0(param_2,local_600,local_604,local_5f4 + 0x260,uVar17);
        }
      }
      local_600 = param_1 + 0x10c0 + local_5b8 * 4;
      if (cVar3 != '\0') {
        param_5 = param_5 + 0xc0;
        if ((short)iStack_5e4 != 0) {
          FUN_00444fe0(auStack_5b0,param_5);
          uStack_5d0 = uStack_580;
          uStack_5cc = uStack_57c;
          uStack_5c8 = uStack_578;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_574 = 0x3f800000;
          FUN_006bdbb0(auStack_5b0,auStack_5b0,iStack_5e4);
          uStack_580 = uStack_5d0;
          uStack_57c = uStack_5cc;
          uStack_578 = uStack_5c8;
          param_5 = auStack_5b0;
        }
        FUN_006bd900(auStack_530,auStack_2c0,puStack_5b4);
        if (*(char *)(param_1 + 0x17cf) != '\0') {
          FUN_006bd900(auStack_530,auStack_530,auStack_4f0);
        }
        FUN_006bd900(auStack_530,auStack_530,param_5);
        FUN_006bd900(auStack_530,auStack_530,auStack_3c0);
        iVar10 = iVar10 + 0xc0;
        FUN_006bd900(iVar10,auStack_530,iVar12);
        puStack_5b4 = (undefined *)(local_5f4 + 0x390);
        FUN_00502580(puStack_5b4,iVar10,&DAT_00987fc0,&local_540,param_2,local_140);
        if (((((local_568 == 0) && (DAT_009885c8 == (int *)0x0)) &&
             (local_5b8 == *(int *)(param_1 + 0x1628))) &&
            ((fVar25 = (float10)FUN_00738440(iVar10,param_2), fVar25 < (float10)_DAT_009b0994 &&
             (*(int *)(param_1 + 0x1628) + 1 <= *(int *)(param_1 + 0x162c))))) &&
           (iVar13 = param_1 + 0x10c4 + *(int *)(param_1 + 0x1628) * 4, iVar13 != 0)) {
          local_600 = iVar13;
        }
        uVar17 = auStack_560[0] | uStack_5ec | local_564 | param_8;
        FUN_007387e0(param_2,local_600,iVar10,puStack_5b4,uVar17);
        if (local_604 != (int *)0x0) {
          fStack_500 = fStack_500 + fVar1;
          FUN_006bd900((int)local_604 + 0x40,auStack_530,iVar12);
          FUN_007387e0(param_2,local_600,(int)local_604 + 0x40,puStack_5b4,uVar17);
        }
      }
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x84) + 0x2c) < (int)local_5fc) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0xd64 + *(int *)(param_1 + 0x1628) * 4) & 0xfffffffc) == 0) {
    return 1;
  }
  auStack_560[0] = (uint)*(byte *)(param_1 + 0x1718);
  local_568 = (uint)*(byte *)(param_1 + 0x16f8);
  cVar4 = *(char *)(param_1 + 0x16d8);
  puStack_5b4 = (undefined *)(uint)*(byte *)(param_1 + 0x1738);
  if (((puStack_5b4 == (undefined *)0x0 && auStack_560[0] == 0) && local_568 == 0) && cVar4 == '\0')
  {
    return 1;
  }
  iVar10 = FUN_00405ed0(4);
  iVar13 = FUN_00405e80(0x4c0);
  if (iVar10 == 0) {
    return 1;
  }
  if (iVar13 == 0) {
    return 1;
  }
  uVar17 = *(uint *)(param_1 + 0xd64 + local_5fc * 4);
  iVar14 = *(int *)(param_1 + 0xe8);
  if ((uVar17 & 0xfffffffc) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uVar17 & 0xfffffffc;
    if (iVar14 != 0) {
      FUN_00501640(0xd6640dff,iVar14);
      FUN_00501640(0xa3186e2b,iVar14);
    }
  }
  local_5fc = *(uint *)(param_1 + 0xe2c + local_5fc * 4);
  if ((local_5fc & 0xfffffffc) == 0) {
    local_5fc = 0;
  }
  else {
    local_5fc = local_5fc & 0xfffffffc;
    if (iVar14 != 0) {
      FUN_00501640(0xd6640dff,iVar14);
      FUN_00501640(0xa3186e2b,iVar14);
    }
  }
  FUN_00466f20(auStack_530);
  auStack_530[0] = 0x3f800000;
  uStack_51c = 0xbf800000;
  uStack_508 = 0x3f800000;
  if (cVar4 != '\0') {
    puStack_5d4 = param_6;
    if ((short)iStack_5dc != 0) {
      FUN_00444fe0(auStack_5b0,param_6);
      uStack_5d0 = uStack_580;
      uStack_5cc = uStack_57c;
      uStack_5c8 = uStack_578;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_574 = 0x3f800000;
      FUN_006bdbb0(auStack_5b0,auStack_5b0,iStack_5dc);
      uStack_580 = uStack_5d0;
      puStack_5d4 = auStack_5b0;
      uStack_57c = uStack_5cc;
      uStack_578 = uStack_5c8;
    }
    FUN_006bd900(auStack_4f0,afStack_280,auStack_530);
    FUN_006bd900(auStack_4f0,auStack_4f0,puStack_5d4);
    FUN_006bd900(auStack_4f0,auStack_4f0,afStack_480);
    FUN_006bd900(iVar10,auStack_4f0,iVar12);
    if ((local_5c0 == 0.0) || (DAT_00925e90 != 6)) {
      if (uVar17 != 0) {
        FUN_004fb6e0(param_1 + 0xb54,2,0);
        FUN_00502580(iVar13,iVar10,&DAT_00987fc0,&local_540,param_2,local_140);
        uVar29 = iVar13;
        goto LAB_0074ffce;
      }
    }
    else if (uVar17 != 0) {
      FUN_004fb6e0(param_1 + 0xb54,2,0);
      uVar29 = local_5f4;
LAB_0074ffce:
      FUN_006da9b0(uVar17,iVar10,uVar29,uStack_5ec | param_8 | 0x40000,0);
    }
  }
  if (local_568 != 0) {
    puVar23 = param_6 + 0x40;
    if ((short)iStack_5dc != 0) {
      FUN_00444fe0(auStack_5b0,puVar23);
      uStack_5c8 = uStack_578;
      uStack_5d0 = uStack_580;
      uStack_5cc = uStack_57c;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_574 = 0x3f800000;
      FUN_006bdbb0(auStack_5b0,auStack_5b0,-iStack_5dc);
      uStack_580 = uStack_5d0;
      uStack_57c = uStack_5cc;
      uStack_578 = uStack_5c8;
      puVar23 = auStack_5b0;
    }
    FUN_006bd900(auStack_4f0,auStack_240,puVar23);
    FUN_006bd900(auStack_4f0,auStack_4f0,auStack_440);
    FUN_006bd900(iVar10 + 0x40,auStack_4f0,iVar12);
    if ((local_5bc == (uint *)0x0) || (DAT_00925e90 != 6)) {
      if (uVar17 != 0) {
        FUN_004fb6e0(param_1 + 0xb6c,2,0);
        FUN_00502580(iVar13 + 0x130,iVar10 + 0x40,&DAT_00987fc0,&local_540,param_2,local_140);
        uVar29 = iVar13;
        goto LAB_00750176;
      }
    }
    else if (uVar17 != 0) {
      FUN_004fb6e0(param_1 + 0xb6c,2,0);
      uVar29 = local_5f4;
LAB_00750176:
      FUN_006da9b0(uVar17,iVar10 + 0x40,uVar29 + 0x130,uStack_5ec | param_8,0);
    }
  }
  if (auStack_560[0] != 0) {
    puVar23 = param_6 + 0x80;
    if ((short)iStack_5e4 != 0) {
      FUN_00444fe0(auStack_5b0,puVar23);
      uStack_5d0 = uStack_580;
      uStack_5cc = uStack_57c;
      uStack_5c8 = uStack_578;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_574 = 0x3f800000;
      FUN_006bdbb0(auStack_5b0,auStack_5b0,-iStack_5e4);
      uStack_57c = uStack_5cc;
      uStack_580 = uStack_5d0;
      uStack_578 = uStack_5c8;
      puVar23 = auStack_5b0;
    }
    FUN_006bd900(auStack_4f0,auStack_200,puVar23);
    FUN_006bd900(auStack_4f0,auStack_4f0,auStack_400);
    iVar14 = iVar10 + 0x80;
    FUN_006bd900(iVar14,auStack_4f0,iVar12);
    if ((cVar9 == '\0') || (DAT_00925e90 != 6)) {
      if (local_5fc == 0) goto LAB_00750340;
      FUN_004fb6e0(param_1 + 0xb6c,2,0);
      iVar30 = iVar13 + 0x260;
      FUN_00502580(iVar30,iVar14,&DAT_00987fc0,&local_540,param_2,local_140);
    }
    else {
      if (local_5fc == 0) goto LAB_00750340;
      FUN_004fb6e0(param_1 + 0xb6c,2,0);
      iVar30 = local_5f4 + 0x260;
    }
    FUN_006da9b0(local_5fc,iVar14,iVar30,uStack_5ec | param_8,0);
  }
LAB_00750340:
  if (puStack_5b4 != (undefined *)0x0) {
    param_6 = param_6 + 0xc0;
    if ((short)iStack_5e4 != 0) {
      FUN_00444fe0(auStack_5b0,param_6);
      uStack_5d0 = uStack_580;
      uStack_5cc = uStack_57c;
      uStack_5c8 = uStack_578;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_574 = 0x3f800000;
      FUN_006bdbb0(auStack_5b0,auStack_5b0,iStack_5e4);
      uStack_580 = uStack_5d0;
      uStack_57c = uStack_5cc;
      uStack_578 = uStack_5c8;
      param_6 = auStack_5b0;
    }
    FUN_006bd900(auStack_4f0,auStack_1c0,auStack_530);
    FUN_006bd900(auStack_4f0,auStack_4f0,param_6);
    FUN_006bd900(auStack_4f0,auStack_4f0,auStack_3c0);
    iVar10 = iVar10 + 0xc0;
    FUN_006bd900(iVar10,auStack_4f0,iVar12);
    if ((cVar3 == '\0') || (DAT_00925e90 != 6)) {
      if (local_5fc != 0) {
        FUN_004fb6e0(param_1 + 0xb54,2,0);
        FUN_00502580(iVar13 + 0x390,iVar10,&DAT_00987fc0,&local_540,param_2,local_140);
        FUN_006da9b0(local_5fc,iVar10,iVar13 + 0x390,uStack_5ec | param_8 | 0x40000,0);
      }
    }
    else if (local_5fc != 0) {
      FUN_004fb6e0(param_1 + 0xb54,2,0);
      FUN_006da9b0(local_5fc,iVar10,local_5f4 + 0x390,uStack_5ec | param_8 | 0x40000,0);
      return 1;
    }
  }
  return 1;
}

