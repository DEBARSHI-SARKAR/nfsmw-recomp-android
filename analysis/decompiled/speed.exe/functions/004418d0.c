/* speed.exe 004418d0 FUN_004418d0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 006f94d0 FUN_006f94d0
 * calls 005d29d0 FUN_005d29d0
 * calls 00460bf0 FUN_00460bf0
 * calls 005d7930 FUN_005d7930
 * calls 0045a430 FUN_0045a430
 * calls 006ee9b0 FUN_006ee9b0
 * calls 00403a10 FUN_00403a10
 * calls 005d0370 FUN_005d0370
 * calls 0041af70 FUN_0041af70
 * calls 00648db0 FUN_00648db0
 * calls 005cc240 FUN_005cc240
 * calls 00453fc0 FUN_00453fc0
 * calls 00455fd0 FUN_00455fd0
 * calls 00435e30 FUN_00435e30
 * calls 004382f0 FUN_004382f0
 * calls 0041b840 FUN_0041b840
 * calls 004108c0 FUN_004108c0
 * calls 00456b20 FUN_00456b20
 * calls 0077b9e0 FUN_0077b9e0
 * calls 006e8e90 FUN_006e8e90
 * calls 006269b0 FUN_006269b0
 * calls 0042e340 FUN_0042e340
 * calls 00455bc0 FUN_00455bc0
 * calls 00456b00 FUN_00456b00
 */

undefined4 * __fastcall FUN_004418d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008697e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = param_1;
  FUN_006f94d0(2);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x13] = puVar4;
  FUN_005d7930(&LAB_00403a00,puVar1);
  if (param_1 == (undefined4 *)0xffffffb0) {
    DAT_0092c674 = (undefined4 *)0x0;
  }
  else {
    DAT_0092c674 = param_1 + 0x12;
  }
  *puVar1 = &PTR_FUN_00890f18;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  FUN_0042e340(puVar4);
  param_1[0x14] = &PTR_LAB_008921cc;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_0089221c;
  param_1[2] = &PTR_LAB_00892214;
  param_1[0xb] = &PTR_LAB_00892200;
  param_1[0xe] = &PTR_LAB_008921e4;
  *puVar1 = &PTR_LAB_008921dc;
  param_1[0x18] = 0;
  param_1[0x23] = 0;
  uVar5 = FUN_0041b840();
  param_1[0x25] = uVar5;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4._0_1_ = 4;
  FUN_0077b9e0();
  local_4._0_1_ = 5;
  param_1[0xe7] = 0x3f000000;
  FUN_00403a10(0,0,0);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4._0_1_ = 6;
  param_1[0x23] = 0;
  FUN_004108c0(0xeec2271a);
  FUN_0041af70();
  local_30 = FUN_005cc240("AITrafficManager");
  uVar5 = FUN_006ee9b0(&local_30,0x3f000000,0x3f000000,1);
  param_1[0x17] = uVar5;
  FUN_006e8e90(uVar5,"AITrafficManager");
  local_30 = FUN_005d29d0(0x28c,0);
  local_4._0_1_ = 7;
  if (local_30 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00648db0(0,0x98c7a2f5,"AITrafficManager",0);
  }
  param_1[0x27] = uVar5;
  local_4 = CONCAT31(local_4._1_3_,6);
  local_30 = FUN_00455bc0(0x20d08342);
  if (local_30 != 0) {
    iVar6 = param_1[0x2a];
    if (iVar6 != 0) {
      FUN_005d0370(iVar6,(param_1[0x2c] - iVar6 >> 3) << 3,0);
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    uVar5 = FUN_00453fc0();
    FUN_004382f0(uVar5);
    iVar6 = FUN_00456b00();
    while (iVar6 != 0) {
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = FUN_00455fd0(0x20d08342,iVar6,0,0);
      FUN_00452380(uVar5,uVar8,uVar9);
      local_4._0_1_ = 8;
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)FUN_006269b0(4);
      }
      local_4._0_1_ = 9;
      local_28 = FUN_00460bf0(*local_18);
      iVar2 = param_1[0x2a];
      iVar7 = param_1[0x2b] - iVar2 >> 3;
      while (iVar3 = iVar7, 0 < iVar3) {
        iVar7 = iVar3 / 2;
        if (*(int *)(iVar2 + iVar7 * 8) <= local_28) {
          iVar2 = iVar2 + 8 + iVar7 * 8;
          iVar7 = iVar3 + (-1 - iVar7);
        }
      }
      local_24 = iVar6;
      FUN_00435e30(iVar2,1,&local_28);
      iVar6 = FUN_00456b20(iVar6);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0045a430();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

