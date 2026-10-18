/* speed.exe 00683eb0 FUN_00683eb0; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 006820a0 FUN_006820a0
 * calls 0045a430 FUN_0045a430
 * calls 00456b00 FUN_00456b00
 * calls 00674e30 FUN_00674e30
 * calls 0045c030 FUN_0045c030
 * calls 0067f950 FUN_0067f950
 * calls 005d0370 FUN_005d0370
 * calls 00456b20 FUN_00456b20
 * calls 006269b0 FUN_006269b0
 * calls 006794e0 FUN_006794e0
 * calls 00452380 FUN_00452380
 * calls 00455bc0 FUN_00455bc0
 * calls 006758b0 FUN_006758b0
 * calls 0066c9a0 FUN_0066c9a0
 * calls 00678ce0 FUN_00678ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00683eb0(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_4c [8];
  int local_44;
  byte local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b740;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00455bc0(0x4a97ec8f);
  iVar5 = FUN_00456b00();
  puVar6 = (undefined4 *)FUN_00674e30();
  local_4 = 0;
  puVar7 = (undefined4 *)FUN_00674e30();
  local_4._0_1_ = 1;
  while (iVar5 != 0) {
    uVar14 = 0;
    uVar13 = 0;
    uVar8 = FUN_00455fd0(0x4a97ec8f,iVar5,0,0);
    FUN_00452380(uVar8,uVar13,uVar14);
    local_4._0_1_ = 2;
    if (local_44 == 0) {
      local_44 = FUN_006269b0(0x50);
    }
    local_4._0_1_ = 3;
    if (((*(int *)(local_44 + 0x18) != DAT_0091ddbc) && ((local_3c & 1) == 0)) &&
       (cVar4 = FUN_0066c9a0(local_4c), cVar4 != '\0')) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_10 = 0;
      local_14 = iVar5;
      cVar4 = FUN_00678ce0(local_4c,0,0);
      if (cVar4 != '\0') {
        piVar12 = DAT_0092c4e8 + 1;
        local_10 = 1;
        iVar9 = FUN_006758b0(DAT_0092c4e8,DAT_0092c4e8[1],&local_38);
        FUN_006820a0(1);
        *piVar12 = iVar9;
        **(int **)(iVar9 + 4) = iVar9;
        iVar9 = FUN_006758b0(puVar6,puVar6[1],&local_38);
        FUN_006820a0(1);
        puVar6[1] = iVar9;
        **(int **)(iVar9 + 4) = iVar9;
      }
      FUN_0045c030();
    }
    iVar5 = FUN_00456b20(iVar5);
    local_4._0_1_ = 1;
    FUN_0045a430();
  }
  piVar12 = (int *)*DAT_0092c4e8;
  if (piVar12 != DAT_0092c4e8) {
    do {
      uVar14 = 0;
      uVar13 = 0;
      uVar8 = FUN_00455fd0(0x4a97ec8f,piVar12[0xb],0,0);
      FUN_00452380(uVar8,uVar13,uVar14);
      local_4._0_1_ = 4;
      if (local_44 == 0) {
        local_44 = FUN_006269b0(0x50);
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      cVar4 = FUN_0067f950(local_4c);
      if (cVar4 != '\0') {
        local_14 = piVar12[0xb];
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_10 = 0;
        cVar4 = FUN_00678ce0(local_4c,0,0);
        if (cVar4 != '\0') {
          local_10 = 1;
          iVar5 = FUN_006758b0(puVar7,puVar7[1],&local_38);
          FUN_006820a0(1);
          puVar7[1] = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          iVar5 = FUN_006758b0(puVar6,puVar6[1],&local_38);
          FUN_006820a0(1);
          puVar6[1] = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
        }
        FUN_0045c030();
      }
      local_4._0_1_ = 1;
      FUN_0045a430();
      piVar12 = (int *)*piVar12;
    } while (piVar12 != DAT_0092c4e8);
  }
  piVar12 = DAT_0092c4e8;
  if (DAT_0092c4ec == 0) {
    puVar10 = (undefined4 *)*puVar7;
    *puVar7 = puVar7;
    local_4 = (uint)local_4._1_3_ << 8;
    puVar7[1] = puVar7;
    while (puVar10 != puVar7) {
      puVar1 = (undefined4 *)*puVar10;
      FUN_005d0370(puVar10,0x34,0);
      puVar10 = puVar1;
    }
    FUN_005d0370(puVar7,0x34,0);
    puVar7 = (undefined4 *)*puVar6;
    *puVar6 = puVar6;
    local_4 = 0xffffffff;
    puVar6[1] = puVar6;
    while (puVar7 != puVar6) {
      puVar10 = (undefined4 *)*puVar7;
      FUN_005d0370(puVar7,0x34,0);
      puVar7 = puVar10;
    }
  }
  else {
    FUN_006794e0(0xbf800000,&DAT_0092c578);
    FUN_006794e0(0x3f800000,&DAT_0092619c);
    piVar11 = (int *)*piVar12;
    if (piVar11 != piVar12) {
      do {
        if ((DAT_009261a4 - DAT_0092c580 <= _DAT_008a92d4) ||
           ((fVar2 = ((float)piVar11[4] - DAT_0092c580) / (DAT_009261a4 - DAT_0092c580),
            fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968)))
           ) {
          fVar3 = _DAT_00890968;
        }
        piVar11[6] = (int)fVar3;
        if ((DAT_0092619c - DAT_0092c578 <= _DAT_008a92d4) ||
           ((fVar2 = ((float)piVar11[2] - DAT_0092c578) / (DAT_0092619c - DAT_0092c578),
            fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968)))
           ) {
          fVar3 = _DAT_00890968;
        }
        piVar11[7] = (int)(_DAT_0089096c - fVar3);
        if ((DAT_009261a0 - DAT_0092c57c <= _DAT_008a92d4) ||
           ((fVar2 = ((float)piVar11[3] - DAT_0092c57c) / (DAT_009261a0 - DAT_0092c57c),
            fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968)))
           ) {
          fVar3 = _DAT_00890968;
        }
        piVar11[5] = (int)fVar3;
        piVar11 = (int *)*piVar11;
        piVar12 = DAT_0092c4e8;
      } while (piVar11 != DAT_0092c4e8);
    }
    for (puVar10 = (undefined4 *)*puVar7; puVar10 != puVar7; puVar10 = (undefined4 *)*puVar10) {
      if ((DAT_009261a4 - DAT_0092c580 <= _DAT_008a92d4) ||
         ((fVar2 = ((float)puVar10[4] - DAT_0092c580) / (DAT_009261a4 - DAT_0092c580),
          fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968))))
      {
        fVar3 = _DAT_00890968;
      }
      puVar10[6] = fVar3;
      if ((DAT_0092619c - DAT_0092c578 <= _DAT_008a92d4) ||
         ((fVar2 = ((float)puVar10[2] - DAT_0092c578) / (DAT_0092619c - DAT_0092c578),
          fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968))))
      {
        fVar3 = _DAT_00890968;
      }
      puVar10[7] = _DAT_0089096c - fVar3;
      if ((DAT_009261a0 - DAT_0092c57c <= _DAT_008a92d4) ||
         ((fVar2 = ((float)puVar10[3] - DAT_0092c57c) / (DAT_009261a0 - DAT_0092c57c),
          fVar3 = _DAT_0089096c, fVar2 < _DAT_0089096c && (fVar3 = fVar2, fVar2 < _DAT_00890968))))
      {
        fVar3 = _DAT_00890968;
      }
      puVar10[5] = fVar3;
      piVar12 = DAT_0092c4e8;
    }
    piVar11 = (int *)*piVar12;
    if (piVar11 != piVar12) {
      do {
        piVar11[8] = piVar11[5];
        piVar11[9] = piVar11[6];
        piVar11[10] = piVar11[7];
        puVar10 = (undefined4 *)*puVar7;
        if (puVar10 != puVar7) {
          do {
            if (piVar11[0xb] == puVar10[0xb]) {
              piVar11[8] = puVar10[5];
              piVar11[9] = puVar10[6];
              piVar11[10] = puVar10[7];
              break;
            }
            puVar10 = (undefined4 *)*puVar10;
          } while (puVar10 != puVar7);
        }
        piVar11 = (int *)*piVar11;
      } while (piVar11 != DAT_0092c4e8);
    }
    puVar10 = (undefined4 *)*puVar7;
    *puVar7 = puVar7;
    DAT_00926184 = 1;
    local_4 = (uint)local_4._1_3_ << 8;
    puVar7[1] = puVar7;
    while (puVar10 != puVar7) {
      puVar1 = (undefined4 *)*puVar10;
      FUN_005d0370(puVar10,0x34,0);
      puVar10 = puVar1;
    }
    FUN_005d0370(puVar7,0x34,0);
    puVar7 = (undefined4 *)*puVar6;
    *puVar6 = puVar6;
    local_4 = 0xffffffff;
    puVar6[1] = puVar6;
    while (puVar7 != puVar6) {
      puVar10 = (undefined4 *)*puVar7;
      FUN_005d0370(puVar7,0x34,0);
      puVar7 = puVar10;
    }
  }
  FUN_005d0370(puVar6,0x34,0);
  ExceptionList = local_c;
  return;
}

