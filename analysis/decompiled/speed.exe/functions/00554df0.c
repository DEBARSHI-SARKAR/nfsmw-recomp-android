/* speed.exe 00554df0 FUN_00554df0; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 00586ca0 FUN_00586ca0
 * calls 00589900 FUN_00589900
 * calls 005a5540 FUN_005a5540
 * calls 00524920 FUN_00524920
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0079bac0 FUN_0079bac0
 * calls 0054e890 FUN_0054e890
 * calls 005b8400 FUN_005b8400
 * calls 00537500 FUN_00537500
 * calls 005865e0 FUN_005865e0
 * calls 00516be0 FUN_00516be0
 * calls 005360a0 FUN_005360a0
 * calls 00522470 FUN_00522470
 * calls 005b8550 FUN_005b8550
 * calls 0079c7d0 FUN_0079c7d0
 * calls 005af1c0 FUN_005af1c0
 * calls 0054e760 FUN_0054e760
 * calls 00525940 FUN_00525940
 * calls 00515e90 FUN_00515e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00554df0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined3 uVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  bool bVar9;
  undefined4 uVar10;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  iVar4 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
  FUN_005a5540();
  FUN_00589900();
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  local_20 = 0;
  iVar5 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
  FUN_00515e20(&local_20,0x20,"High_Light_%d",iVar5);
  iVar7 = *(int *)(param_1 + 0x10);
  uVar6 = FUN_005af1c0(&local_20);
  if (((iVar7 == 0) || (iVar7 = FUN_00516af0(iVar7), iVar7 == 0)) ||
     (iVar7 = FUN_005b8550(uVar6), iVar7 == 0)) {
    iVar7 = 0;
  }
  if (((DAT_00987f71 != '\0') &&
      (cVar3 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,(float)DAT_00987f58 - _DAT_00894b38,
                            iVar7), cVar3 != '\0')) && (iVar4 == iVar5)) {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    FUN_00516be0(0xc407210,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
  }
  iVar7 = *(int *)(param_1 + 0x1ec);
  fVar1 = (float)DAT_00987f54 - _DAT_00894b40;
  fVar2 = (float)DAT_00987f58 - _DAT_00894b38;
  cVar3 = FUN_0054e760(fVar1,fVar2,*(undefined4 *)(param_1 + 0x1cc));
  if (cVar3 == '\0') {
    cVar3 = FUN_0054e760(fVar1,fVar2,*(undefined4 *)(param_1 + 0x1d0));
    if (cVar3 == '\0') {
      cVar3 = FUN_0054e760(fVar1,fVar2,*(undefined4 *)(param_1 + 0x1d4));
      if (cVar3 == '\0') {
        cVar3 = FUN_0054e760(fVar1,fVar2,*(undefined4 *)(param_1 + 0x1d8));
        if (cVar3 != '\0') {
          uVar6 = *(undefined4 *)(param_1 + 0x1e8);
          *(undefined4 *)(param_1 + 0x1a4) = 3;
          goto LAB_00554fd4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1e4);
        *(undefined4 *)(param_1 + 0x1a4) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1a4) = 1;
LAB_00554fd4:
    *(undefined4 *)(param_1 + 0x1ec) = uVar6;
  }
  if (*(int *)(param_1 + 0x1ec) != iVar7) {
    if ((iVar7 != 0) && (iVar7 = FUN_005b1360(0x7ab5521a), iVar7 != 0)) {
      FUN_005b8400(iVar7,0);
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x1ec) != 0) && (iVar7 = FUN_005b1360(0x249db7b7), iVar7 != 0)) {
      FUN_005b8400(iVar7,0);
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x1ec) + 0x10));
  }
  if (DAT_00987f71 != '\0') {
    cVar3 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,(float)DAT_00987f58 - _DAT_00894b38,
                         *(undefined4 *)(param_1 + 0x1cc));
    if (cVar3 == '\0') {
      cVar3 = FUN_0054e890(*(undefined4 *)(param_1 + 0x1d0));
      if (cVar3 == '\0') {
        cVar3 = FUN_0054e890(*(undefined4 *)(param_1 + 0x1d4));
        if (cVar3 == '\0') {
          cVar3 = FUN_0054e890(*(undefined4 *)(param_1 + 0x1d8));
          if (cVar3 == '\0') {
            cVar3 = FUN_0054e890(*(undefined4 *)(param_1 + 500));
            if (cVar3 != '\0') {
              FUN_00516be0(0x72619778,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
              FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x444969fd,0x280164f,1);
              return;
            }
            cVar3 = FUN_0054e890(*(undefined4 *)(param_1 + 0x1f8));
            if (cVar3 != '\0') {
              FUN_00516be0(0x911c0a4b,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
              FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x444969fe,0x280164f,1);
              return;
            }
          }
          else {
            FUN_00525940("UI_OLFilters.fng",0,0,0);
          }
        }
        else {
          FUN_00537500();
        }
      }
      else {
        FUN_00522470();
      }
    }
    else {
      FUN_005360a0();
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x6e351c30), iVar7 == 0)) {
      iVar7 = 0;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
       (iVar4 = FUN_005b8550(0x31e62b1a), iVar4 == 0)) {
      iVar4 = 0;
    }
    if (((DAT_00987f71 != '\0') &&
        (uVar6 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,
                              (float)DAT_00987f58 - _DAT_00894b38,iVar7), (char)uVar6 != '\0')) ||
       (uVar6 = FUN_0054e890(iVar4), (char)uVar6 != '\0')) {
      uVar8 = (undefined3)((uint)uVar6 >> 8);
      if (*(char *)(param_1 + 0x1c4) == '\0') {
        if (iVar4 != 0) {
          uVar6 = 0xc721e3ec;
          goto LAB_00555267;
        }
      }
      else if (iVar4 != 0) {
        uVar6 = 0x172143bf;
LAB_00555267:
        iVar7 = FUN_005b1360(uVar6);
        uVar8 = 0;
        if (iVar7 != 0) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          uVar8 = extraout_var;
        }
      }
      bVar9 = *(char *)(param_1 + 0x1c4) == '\0';
      uVar6 = CONCAT31(uVar8,bVar9);
      *(bool *)(param_1 + 0x1c4) = bVar9;
      uVar10 = 1;
      FUN_0079bac0(1,uVar6);
      FUN_0079c7d0(uVar10,uVar6);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x5b80b337), iVar7 == 0)) {
      iVar7 = 0;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
       (iVar4 = FUN_005b8550(0x601eab61), iVar4 == 0)) {
      iVar4 = 0;
    }
    if (((DAT_00987f71 != '\0') &&
        (uVar6 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,
                              (float)DAT_00987f58 - _DAT_00894b38,iVar7), (char)uVar6 != '\0')) ||
       (uVar6 = FUN_0054e890(iVar4), (char)uVar6 != '\0')) {
      uVar8 = (undefined3)((uint)uVar6 >> 8);
      if (*(char *)(param_1 + 0x1c5) == '\0') {
        if (iVar4 != 0) {
          uVar6 = 0xc721e3ec;
          goto LAB_00555362;
        }
      }
      else if (iVar4 != 0) {
        uVar6 = 0x172143bf;
LAB_00555362:
        iVar7 = FUN_005b1360(uVar6);
        uVar8 = 0;
        if (iVar7 != 0) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          uVar8 = extraout_var_00;
        }
      }
      bVar9 = *(char *)(param_1 + 0x1c5) == '\0';
      uVar6 = CONCAT31(uVar8,bVar9);
      *(bool *)(param_1 + 0x1c5) = bVar9;
      uVar10 = 2;
      FUN_0079bac0(2,uVar6);
      FUN_0079c7d0(uVar10,uVar6);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x8e3e2242), iVar7 == 0)) {
      iVar7 = 0;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
       (iVar4 = FUN_005b8550(0xbbb3f6ac), iVar4 == 0)) {
      iVar4 = 0;
    }
    if (((DAT_00987f71 != '\0') &&
        (uVar6 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,
                              (float)DAT_00987f58 - _DAT_00894b38,iVar7), (char)uVar6 != '\0')) ||
       (uVar6 = FUN_0054e890(iVar4), (char)uVar6 != '\0')) {
      uVar8 = (undefined3)((uint)uVar6 >> 8);
      if (*(char *)(param_1 + 0x1c6) == '\0') {
        if (iVar4 != 0) {
          uVar6 = 0xc721e3ec;
          goto LAB_0055545d;
        }
      }
      else if (iVar4 != 0) {
        uVar6 = 0x172143bf;
LAB_0055545d:
        iVar7 = FUN_005b1360(uVar6);
        uVar8 = 0;
        if (iVar7 != 0) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          uVar8 = extraout_var_01;
        }
      }
      bVar9 = *(char *)(param_1 + 0x1c6) == '\0';
      uVar6 = CONCAT31(uVar8,bVar9);
      *(bool *)(param_1 + 0x1c6) = bVar9;
      uVar10 = 3;
      FUN_0079bac0(3,uVar6);
      FUN_0079c7d0(uVar10,uVar6);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x17c1230a), iVar7 == 0)) {
      iVar7 = 0;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
       (iVar4 = FUN_005b8550(0x3ef66d74), iVar4 == 0)) {
      iVar4 = 0;
    }
    if (((DAT_00987f71 != '\0') &&
        (uVar6 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,
                              (float)DAT_00987f58 - _DAT_00894b38,iVar7), (char)uVar6 != '\0')) ||
       (uVar6 = FUN_0054e890(iVar4), (char)uVar6 != '\0')) {
      uVar8 = (undefined3)((uint)uVar6 >> 8);
      if (*(char *)(param_1 + 0x1c7) == '\0') {
        if (iVar4 != 0) {
          uVar6 = 0xc721e3ec;
          goto LAB_00555558;
        }
      }
      else if (iVar4 != 0) {
        uVar6 = 0x172143bf;
LAB_00555558:
        iVar7 = FUN_005b1360(uVar6);
        uVar8 = 0;
        if (iVar7 != 0) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          uVar8 = extraout_var_02;
        }
      }
      bVar9 = *(char *)(param_1 + 0x1c7) == '\0';
      uVar6 = CONCAT31(uVar8,bVar9);
      *(bool *)(param_1 + 0x1c7) = bVar9;
      uVar10 = 0;
      FUN_0079bac0(0,uVar6);
      FUN_0079c7d0(uVar10,uVar6);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0xaaa423ab), iVar7 == 0)) {
      iVar7 = 0;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
       (iVar4 = FUN_005b8550(0x9979a2d5), iVar4 == 0)) {
      iVar4 = 0;
    }
    if (((DAT_00987f71 != '\0') &&
        (uVar6 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,
                              (float)DAT_00987f58 - _DAT_00894b38,iVar7), (char)uVar6 != '\0')) ||
       (uVar6 = FUN_0054e890(iVar4), (char)uVar6 != '\0')) {
      uVar8 = (undefined3)((uint)uVar6 >> 8);
      if (*(char *)(param_1 + 0x1c8) == '\0') {
        if (iVar4 != 0) {
          uVar6 = 0xc721e3ec;
          goto LAB_00555653;
        }
      }
      else if (iVar4 != 0) {
        uVar6 = 0x172143bf;
LAB_00555653:
        iVar7 = FUN_005b1360(uVar6);
        uVar8 = 0;
        if (iVar7 != 0) {
          FUN_005b8400(iVar7,0);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          uVar8 = extraout_var_03;
        }
      }
      bVar9 = *(char *)(param_1 + 0x1c8) == '\0';
      uVar6 = CONCAT31(uVar8,bVar9);
      *(bool *)(param_1 + 0x1c8) = bVar9;
      uVar10 = 4;
      FUN_0079bac0(4,uVar6);
      FUN_0079c7d0(uVar10,uVar6);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x28c0ab0), iVar7 == 0)) {
      iVar7 = 0;
    }
    if ((DAT_00987f71 != '\0') &&
       (cVar3 = FUN_0054e760((float)DAT_00987f54 - _DAT_00894b40,(float)DAT_00987f58 - _DAT_00894b38
                             ,iVar7), cVar3 != '\0')) {
      if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
        return;
      }
      FUN_005865e0(0x28c0ab0,0,&DAT_00890978,&DAT_00890978,0x20);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0xcb3b8831), iVar7 == 0)) {
      iVar7 = 0;
    }
    cVar3 = FUN_0054e890(iVar7);
    if (cVar3 != '\0') {
      if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
        return;
      }
      FUN_005865e0(0xcb3b8831,0,&DAT_00890978,&DAT_00890978,0x20);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar7 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar7 == 0)) ||
       (iVar7 = FUN_005b8550(0x3a0d5aa0), iVar7 == 0)) {
      iVar7 = 0;
    }
    cVar3 = FUN_0054e890(iVar7);
    if (cVar3 != '\0') {
      if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
        return;
      }
      FUN_005865e0(0x3a0d5aa0,0,&DAT_00890978,&DAT_00890978,0x20);
    }
  }
  if (*(int *)(param_1 + 0x254) == -1) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = 0x72619778;
  }
  else {
    if (*(int *)(param_1 + 0x254) != 1) goto LAB_0055586c;
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = 0x911c0a4b;
  }
  FUN_00516be0(uVar10,uVar6,0xffffffff,0xff);
LAB_0055586c:
  fVar1 = (float)DAT_00987f6c;
  if (fVar1 != _DAT_00890968) {
    if (_DAT_00890968 < fVar1) {
      FUN_00516be0(0x72619778,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      return;
    }
    if (fVar1 < _DAT_00890968) {
      FUN_00516be0(0x911c0a4b,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      return;
    }
  }
  return;
}

