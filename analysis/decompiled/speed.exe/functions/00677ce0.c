/* speed.exe 00677ce0 FUN_00677ce0; analysis pseudocode, not buildable source.
 * calls 0045be60 FUN_0045be60
 * calls 00458660 FUN_00458660
 * calls 00459040 FUN_00459040
 * calls 004543c0 FUN_004543c0
 * calls 0045a430 FUN_0045a430
 * calls 00676320 FUN_00676320
 * calls 00672bc0 FUN_00672bc0
 * calls 0045cd20 __break
 * calls 00676280 FUN_00676280
 * calls 004546c0 FUN_004546c0
 * calls 00456cb0 FUN_00456cb0
 * calls 00452bd0 FUN_00452bd0
 * calls 0045a840 FUN_0045a840
 * calls 00456d40 FUN_00456d40
 * calls 00452d40 FUN_00452d40
 * calls 004547f0 FUN_004547f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00677ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_70 [3];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ab30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00456cb0(param_2,0,0);
  local_4 = 0;
  if (_DAT_0089096c <= param_4) {
    FUN_0045a840(param_3);
    ExceptionList = local_c;
    return param_1;
  }
  if (_DAT_00890968 < param_4) {
    FUN_0045a840(param_2);
    uVar8 = 0;
    uVar2 = FUN_00456d40("part_upgrade",0);
    FUN_0045be60(uVar2,uVar8);
    FUN_00456cb0(param_3,0,0);
    local_4._0_1_ = 1;
    FUN_00456cb0(param_2,0,0);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004547f0(local_70);
    if (local_70[0] != 0) {
      do {
        iVar7 = local_70[0];
        FUN_004546c0(local_54,local_70[0]);
        local_4._0_1_ = 3;
        FUN_004546c0(local_64,iVar7);
        local_4._0_1_ = 4;
        uVar3 = FUN_00452d40();
        uVar4 = FUN_00452d40();
        if (uVar3 < uVar4) {
          uVar3 = uVar4;
        }
        iVar5 = FUN_00458660();
        iVar6 = FUN_00458660();
        if ((iVar6 == iVar5) && (uVar3 != 0)) {
          FUN_00459040(iVar7,uVar3);
          FUN_004546c0(local_44,iVar7);
          local_4 = CONCAT31(local_4._1_3_,5);
          iVar7 = FUN_00458660();
          uVar4 = 0;
          if (uVar3 != 0) {
            do {
              if (iVar7 == 0x3c16ec5e) {
                FUN_00676280(local_64,local_54,uVar4,param_4,local_44);
              }
              else if (iVar7 == 0x4cb36381) {
                FUN_00672bc0(local_64,local_54,uVar4,param_4,local_44);
              }
              else {
                if (iVar7 != 0x5763da41) {
                    /* WARNING: Subroutine does not return */
                  __break();
                }
                FUN_00676320(local_64,local_54,uVar4,param_4,local_44);
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar3);
          }
          local_4._0_1_ = 4;
          FUN_00452bd0();
        }
        local_4._0_1_ = 3;
        FUN_00452bd0();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00452bd0();
        cVar1 = FUN_004543c0();
      } while (cVar1 != '\0');
    }
    local_4._0_1_ = 1;
    FUN_0045a430();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return param_1;
}

