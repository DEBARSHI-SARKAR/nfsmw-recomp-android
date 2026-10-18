/* speed.exe 00678150 FUN_00678150; analysis pseudocode, not buildable source.
 * calls 00458660 FUN_00458660
 * calls 006760e0 FUN_006760e0
 * calls 0045a430 FUN_0045a430
 * calls 00677fe0 FUN_00677fe0
 * calls 00454c30 FUN_00454c30
 * calls 0045be30 FUN_0045be30
 * calls 00452950 FUN_00452950
 * calls 00668310 FUN_00668310
 * calls 006679b0 FUN_006679b0
 * calls 006763c0 FUN_006763c0
 * calls 006269b0 FUN_006269b0
 * calls 0066fbb0 FUN_0066fbb0
 * calls 00403c30 FUN_00403c30
 * calls 00455c40 FUN_00455c40
 * calls 006682f0 FUN_006682f0
 * calls 00677b20 FUN_00677b20
 * calls 00456cb0 FUN_00456cb0
 * calls 0045bf10 FUN_0045bf10
 * calls 00452bd0 FUN_00452bd0
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00452b30 FUN_00452b30
 * calls 004596e0 FUN_004596e0
 * calls 00454810 FUN_00454810
 * calls 00454760 FUN_00454760
 */

undefined4 FUN_00678150(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_58 [12];
  int local_4c;
  undefined1 local_48 [8];
  int local_40;
  byte local_38;
  int local_30;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ab90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  puVar6 = (uint *)FUN_00454810(0xcdc136e8,0);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)FUN_006269b0(4);
  }
  iVar3 = param_2;
  param_2 = 1 << ((byte)param_2 & 0x1f);
  if ((*puVar6 & param_2) != 0) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
  cVar5 = FUN_00677fe0(param_1,iVar3);
  if (cVar5 != '\0') {
    piVar7 = &DAT_008f87a0;
    iVar2 = DAT_008f87a8;
    while (iVar2 != 0) {
      if (*piVar7 == iVar3) {
        iVar3 = piVar7[5];
        iVar2 = piVar7[2];
        if ((iVar2 == 0) || (iVar3 == 0)) {
          local_4 = 0xffffffff;
          FUN_0045a430();
          ExceptionList = local_c;
          return 0;
        }
        puVar6 = (uint *)FUN_00668310();
        uVar4 = *puVar6;
        if ((local_38 & 1) != 0) {
          FUN_004596e0(0xcdc136e8);
        }
        FUN_00452b30();
        local_4 = CONCAT31(local_4._1_3_,1);
        cVar5 = FUN_00454760(iVar2,local_58);
        if ((cVar5 != '\0') && (iVar8 = FUN_00458660(), iVar8 == 0x2b936eb7)) {
          if ((local_4c == 0) && (local_4c = FUN_00454c30(0), local_4c == 0)) {
            local_4c = FUN_006269b0(0xc);
          }
          FUN_00452950(local_4c);
          local_4._0_1_ = 2;
          uVar9 = FUN_006682f0();
          FUN_00456cb0(uVar9,0,0);
          local_4._0_1_ = 3;
          FUN_00677b20(local_64,local_20,iVar3);
          if (local_30 != 0) {
            local_70 = 0;
            local_6c = 0;
            local_68 = 0;
            local_4 = CONCAT31(local_4._1_3_,5);
            FUN_0045bf10(local_30);
            cVar5 = FUN_006679b0(local_64);
            if (cVar5 != '\0') {
              if ((local_38 & 1) == 0) {
                uVar10 = 0;
                uVar9 = FUN_00455c40(0x4a97ec8f,*(undefined4 *)(local_40 + 0x24),0);
                FUN_0066fbb0(uVar9,uVar10);
              }
              else {
                FUN_004596e0(iVar2);
              }
              cVar5 = FUN_006763c0(iVar2,&local_70,1);
              if (cVar5 == '\0') {
                local_4._0_1_ = 4;
                if (local_68 != 0) {
                  FUN_0045a8a0();
                }
                local_4._0_1_ = 3;
                FUN_0045a430();
                local_4._0_1_ = 2;
                FUN_0045a430();
                local_4 = CONCAT31(local_4._1_3_,1);
                if (local_5c != 0) {
                  FUN_0045a8a0();
                }
                goto LAB_00678288;
              }
            }
            param_2 = uVar4 | param_2;
            cVar5 = FUN_006760e0(0xcdc136e8,&param_2,1);
            if (cVar5 != '\0') {
              FUN_0045be30(local_48);
              local_4._0_1_ = 4;
              if (local_68 != 0) {
                FUN_0045a8a0();
              }
              local_4._0_1_ = 3;
              FUN_0045a430();
              local_4._0_1_ = 2;
              FUN_0045a430();
              local_4._0_1_ = 1;
              if (local_5c != 0) {
                FUN_0045a8a0();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00452bd0();
              local_4 = 0xffffffff;
              FUN_0045a430();
              ExceptionList = local_c;
              return 1;
            }
            local_4._0_1_ = 4;
            if (local_68 != 0) {
              FUN_0045a8a0();
            }
          }
          local_4._0_1_ = 3;
          FUN_0045a430();
          local_4._0_1_ = 2;
          FUN_0045a430();
          local_4 = CONCAT31(local_4._1_3_,1);
          if (local_5c != 0) {
            FUN_0045a8a0();
          }
        }
LAB_00678288:
        local_4 = local_4 & 0xffffff00;
        FUN_00452bd0();
        local_4 = 0xffffffff;
        FUN_0045a430();
        ExceptionList = local_c;
        return 0;
      }
      piVar1 = piVar7 + 9;
      piVar7 = piVar7 + 7;
      iVar2 = *piVar1;
    }
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

