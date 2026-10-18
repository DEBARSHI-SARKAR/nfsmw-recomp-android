/* speed.exe 00678730 FUN_00678730; analysis pseudocode, not buildable source.
 * calls 00667990 FUN_00667990
 * calls 00458660 FUN_00458660
 * calls 006760e0 FUN_006760e0
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 0045be30 FUN_0045be30
 * calls 00452950 FUN_00452950
 * calls 006763c0 FUN_006763c0
 * calls 00678150 FUN_00678150
 * calls 0066f030 FUN_0066f030
 * calls 0066b850 FUN_0066b850
 * calls 0066fbb0 FUN_0066fbb0
 * calls 00403c30 FUN_00403c30
 * calls 00455c40 FUN_00455c40
 * calls 0066b8b0 FUN_0066b8b0
 * calls 0045bf10 FUN_0045bf10
 * calls 00678530 FUN_00678530
 * calls 00452bd0 FUN_00452bd0
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00452b30 FUN_00452b30
 * calls 00677a80 FUN_00677a80
 * calls 00452d40 FUN_00452d40
 * calls 00677ce0 FUN_00677ce0
 * calls 00454760 FUN_00454760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00678730(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  int local_2c;
  byte local_24;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087abf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  if (param_4 < _DAT_00890968 != (param_4 == _DAT_00890968)) {
    FUN_00678530(param_1,param_2);
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
  iVar4 = FUN_00672e80(local_34,param_2);
  if (((iVar4 < 1) || (_DAT_0089096c < param_4)) || (iVar4 = FUN_0066b850(param_2), iVar4 == 0)) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = *(int *)(iVar4 + 8);
  if (iVar1 != 0) {
    cVar2 = FUN_0066b8b0(param_1,param_2);
    FUN_00677a80();
    FUN_00452b30();
    local_4._0_1_ = 1;
    cVar3 = FUN_00454760(iVar1,local_44);
    if (((cVar3 != '\0') && (iVar5 = FUN_00458660(), iVar5 == 0x2b936eb7)) &&
       (uVar6 = FUN_00452d40(), 1 < uVar6)) {
      uVar8 = 1;
      iVar5 = FUN_00452d40();
      if (iVar5 == 3) {
        uVar8 = 2;
      }
      uVar7 = FUN_0066f030(iVar5 == 3);
      FUN_00452950(uVar7);
      local_4._0_1_ = 2;
      uVar8 = FUN_0066f030(uVar8);
      FUN_00452950(uVar8);
      local_4._0_1_ = 3;
      if (((local_68 != 0) && (local_5c != 0)) && ((local_64 != 0 && (local_58 != 0)))) {
        FUN_00677ce0(&local_68,&local_5c,param_4);
        if (local_1c != 0) {
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_0045bf10(local_1c);
          cVar3 = FUN_00667990(&local_68);
          if (cVar3 != '\0') {
LAB_00678a51:
            local_4._0_1_ = 4;
            if (local_48 != 0) {
              FUN_0045a8a0();
            }
            local_4._0_1_ = 3;
            FUN_0045a430();
            local_4._0_1_ = 2;
            if (local_54 != 0) {
              FUN_0045a8a0();
            }
            local_4._0_1_ = 1;
            if (local_60 != 0) {
              FUN_0045a8a0();
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00452bd0();
            local_4 = 0xffffffff;
            FUN_0045a430();
            ExceptionList = local_c;
            return 1;
          }
          if ((local_24 & 1) == 0) {
            uVar7 = 0;
            uVar8 = FUN_00455c40(0x4a97ec8f,*(undefined4 *)(local_2c + 0x24),0);
            FUN_0066fbb0(uVar8,uVar7);
          }
          cVar3 = FUN_006763c0(iVar1,&local_50,1);
          if (((cVar3 != '\0') &&
              (cVar3 = FUN_006760e0(*(undefined4 *)(iVar4 + 0x10),&param_3,1), cVar3 != '\0')) &&
             ((cVar2 == '\0' || (cVar2 = FUN_00678150(local_34,param_2), cVar2 != '\0')))) {
            FUN_0045be30(local_34);
            goto LAB_00678a51;
          }
          local_4._0_1_ = 4;
          if (local_48 != 0) {
            FUN_0045a8a0();
          }
        }
        local_4._0_1_ = 3;
        FUN_0045a430();
      }
      local_4._0_1_ = 2;
      if (local_54 != 0) {
        FUN_0045a8a0();
      }
      local_4._0_1_ = 1;
      if (local_60 != 0) {
        FUN_0045a8a0();
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00452bd0();
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

