/* speed.exe 00686790 FUN_00686790; analysis pseudocode, not buildable source.
 * calls 0067a5e0 FUN_0067a5e0
 * calls 005cc240 FUN_005cc240
 * calls 00675a10 FUN_00675a10
 * calls 0067e880 FUN_0067e880
 * calls 005d29d0 FUN_005d29d0
 * calls 00449320 FUN_00449320
 * calls 00452380 FUN_00452380
 * calls 00478ec0 FUN_00478ec0
 * calls 00456050 FUN_00456050
 * calls 00675650 FUN_00675650
 * calls 00454640 FUN_00454640
 * calls 005d7930 FUN_005d7930
 * calls 006ee9b0 FUN_006ee9b0
 * calls 006fbed0 FUN_006fbed0
 * calls 006ee860 FUN_006ee860
 * calls 00674a50 FUN_00674a50
 */

undefined4 * __thiscall
FUN_00686790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b805;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee860(0xd);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  FUN_0067e880(puVar4);
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0xe;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xf] = puVar4;
  FUN_005d7930(&LAB_004039d0,puVar1);
  *puVar1 = &PTR_FUN_008a93f4;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0x10;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x11] = puVar4;
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0067a5e0(param_1);
  local_4._0_1_ = 4;
  uVar2 = FUN_00675650();
  param_1[0x14] = uVar2;
  param_1[0x15] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_FUN_008aa5b0;
  param_1[2] = &PTR_LAB_008aa5a8;
  param_1[0xb] = &PTR_LAB_008aa518;
  param_1[0xe] = &PTR_LAB_008aa4f8;
  *puVar1 = &PTR_LAB_008aa4dc;
  iVar3 = FUN_005d29d0(0x3c,0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00449320(0x3ccccccd);
  }
  uVar6 = 0;
  param_1[0x16] = uVar2;
  uVar5 = 0;
  param_1[0x17] = param_4;
  param_1[0x18] = param_5;
  uVar2 = FUN_00454640(param_3,0,0);
  uVar2 = FUN_00454640(param_2,uVar2);
  uVar2 = FUN_00456050(uVar2);
  FUN_00452380(uVar2,uVar5,uVar6);
  local_4._0_1_ = 6;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_1[0xd] | 0x1000000;
  iVar3 = FUN_00675a10();
  param_1[0x25] = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined4 *)(param_1[0x25] + 4) = param_1[0x25];
  *(undefined4 *)param_1[0x25] = param_1[0x25];
  *(undefined4 *)(param_1[0x25] + 8) = param_1[0x25];
  param_1[0x26] = 0;
  local_4._0_1_ = 7;
  uVar2 = FUN_00674a50();
  param_1[0x28] = uVar2;
  param_1[0x29] = 0;
  local_4._0_1_ = 8;
  puVar4 = (undefined4 *)FUN_005d29d0(0x14,0);
  local_4._0_1_ = 9;
  param_4 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_008952f0;
    uVar2 = FUN_00478ec0();
    puVar4[2] = uVar2;
    puVar4[3] = 0;
    puVar4[4] = puVar1;
  }
  param_1[0x2a] = puVar4;
  local_4 = CONCAT31(local_4._1_3_,8);
  if (param_6 != 0) {
    param_1[0x23] = param_6;
  }
  param_4 = (undefined4 *)FUN_005cc240("Physics");
  uVar2 = FUN_006ee9b0(&param_4,0x3f800000,0,0);
  param_1[0x1f] = uVar2;
  FUN_006fbed0(param_1[0xd]);
  ExceptionList = local_c;
  return param_1;
}

