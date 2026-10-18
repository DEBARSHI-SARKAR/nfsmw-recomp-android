/* speed.exe 005e7210 FUN_005e7210; analysis pseudocode, not buildable source.
 * calls 004546c0 FUN_004546c0
 * calls 00452bd0 FUN_00452bd0
 * calls 00459040 FUN_00459040
 * calls 00454c30 FUN_00454c30
 * calls 00452c50 FUN_00452c50
 * calls 00452d30 FUN_00452d30
 * calls 006269b0 FUN_006269b0
 * calls 00452b40 FUN_00452b40
 * calls 00452d40 FUN_00452d40
 */

undefined4 __thiscall FUN_005e7210(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 local_4c [12];
  undefined4 *local_40;
  undefined1 local_3c [12];
  undefined4 *local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875359;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_004546c0(local_2c,param_3);
  local_4 = 1;
  FUN_00452b40(uVar2);
  local_4._0_1_ = 3;
  FUN_00452bd0();
  cVar1 = FUN_00452c50();
  if ((cVar1 == '\0') || (iVar3 = FUN_00452d30(), iVar3 == *(int *)(param_1 + 4))) {
    FUN_00452b40(local_4c);
  }
  else {
    uVar4 = FUN_00452d40();
    cVar1 = FUN_00459040(param_3,uVar4);
    if (cVar1 == '\0') {
      FUN_00452b40(local_4c);
    }
    else {
      uVar2 = FUN_004546c0(local_1c,param_3);
      local_4._0_1_ = 4;
      FUN_00452b40(uVar2);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00452bd0();
      FUN_00452d30();
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          if (local_40 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)FUN_00454c30(uVar7);
LAB_005e730d:
            if (puVar5 == (undefined4 *)0x0) goto LAB_005e7311;
          }
          else {
            puVar5 = local_40;
            if (uVar7 == 0) goto LAB_005e730d;
LAB_005e7311:
            puVar5 = (undefined4 *)FUN_006269b0(4);
          }
          if (local_30 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_00454c30(uVar7);
LAB_005e7335:
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar5;
            }
          }
          else {
            puVar6 = local_30;
            if (uVar7 == 0) goto LAB_005e7335;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      FUN_00452b40(local_3c);
      local_4._0_1_ = 3;
      FUN_00452bd0();
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00452bd0();
  ExceptionList = local_c;
  return param_2;
}

