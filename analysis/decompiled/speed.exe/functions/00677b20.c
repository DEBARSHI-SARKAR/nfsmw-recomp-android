/* speed.exe 00677b20 FUN_00677b20; analysis pseudocode, not buildable source.
 * calls 0045be60 FUN_0045be60
 * calls 00458660 FUN_00458660
 * calls 00454c30 FUN_00454c30
 * calls 00459040 FUN_00459040
 * calls 00676210 FUN_00676210
 * calls 0045cd20 __break
 * calls 00672ca0 FUN_00672ca0
 * calls 004546c0 FUN_004546c0
 * calls 006761a0 FUN_006761a0
 * calls 00456cb0 FUN_00456cb0
 * calls 00452bd0 FUN_00452bd0
 * calls 00456d40 FUN_00456d40
 * calls 00452b30 FUN_00452b30
 * calls 00452d40 FUN_00452d40
 * calls 00454760 FUN_00454760
 */

undefined4 __thiscall
FUN_00677b20(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 local_3c [16];
  undefined1 local_2c [12];
  int local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087aaf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00456cb0(param_2,0,0);
  local_4 = 0;
  FUN_00452b30();
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_00454760(param_4,local_2c);
  if (cVar1 != '\0') {
    uVar7 = 0;
    uVar2 = FUN_00456d40("junk_upgrade",0);
    FUN_0045be60(uVar2,uVar7);
    uVar3 = FUN_00452d40();
    param_2 = 0;
    if (uVar3 != 0) {
      do {
        if (local_20 == 0) {
          iVar5 = FUN_00454c30(param_2);
LAB_00677bcc:
          if (iVar5 != 0) {
            uVar2 = *(undefined4 *)(iVar5 + 4);
            uVar7 = *(undefined4 *)(iVar5 + 8);
            FUN_004546c0(local_1c,uVar2);
            local_4._0_1_ = 2;
            uVar4 = FUN_00452d40();
            if (uVar4 != 0) {
              FUN_00459040(uVar2,uVar4);
              FUN_004546c0(local_3c,uVar2);
              local_4 = CONCAT31(local_4._1_3_,3);
              iVar5 = FUN_00458660();
              uVar6 = 0;
              if (uVar4 != 0) {
                do {
                  if (iVar5 == 0x3c16ec5e) {
                    FUN_006761a0(local_3c,uVar6,uVar7);
                  }
                  else if (iVar5 == 0x4cb36381) {
                    FUN_00672ca0(local_3c,uVar6,uVar7);
                  }
                  else {
                    if (iVar5 != 0x5763da41) {
                    /* WARNING: Subroutine does not return */
                      __break();
                    }
                    FUN_00676210(local_3c,uVar6,uVar7);
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar4);
              }
              local_4._0_1_ = 2;
              FUN_00452bd0();
            }
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00452bd0();
          }
        }
        else {
          iVar5 = local_20;
          if (param_2 == 0) goto LAB_00677bcc;
        }
        param_2 = param_2 + 1;
      } while (param_2 < uVar3);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00452bd0();
  ExceptionList = local_c;
  return param_1;
}

