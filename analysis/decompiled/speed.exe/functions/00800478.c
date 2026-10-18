/* speed.exe 00800478 FUN_00800478; analysis pseudocode, not buildable source.
 * calls 008086e6 FUN_008086e6
 * calls 008085a4 FUN_008085a4
 * calls 00808752 FUN_00808752
 * calls 0080037d FUN_0080037d
 * calls 0080023d FUN_0080023d
 */

void FUN_00800478(int param_1)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 0xa24;
  local_14 = param_1 + 0x9ac;
  local_c = param_1 + 0x3100;
  local_10 = param_1 + 0x3a4;
  iVar1 = param_1 + 0x9c4;
  local_18 = 2;
  do {
    FUN_0080023d(local_10,iVar1);
    FUN_008085a4(local_8,iVar1,0xc);
    FUN_008086e6(local_8,local_c);
    FUN_00808752(local_8,0,iVar1 + -0x78,local_14,0,0);
    local_c = local_c + 0x80;
    local_10 = local_10 + 0xb;
    local_14 = local_14 + 0xc;
    local_8 = local_8 + 0x90;
    iVar1 = iVar1 + 0x30;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  local_8 = param_1 + 0x2fb0;
  local_c = param_1 + 0x2f24;
  local_14 = param_1 + 0x4400;
  iVar1 = param_1 + 0x2f40;
  local_18 = 2;
  do {
    FUN_0080037d(local_c + -0x29c0,iVar1);
    FUN_008085a4(local_8,iVar1,9);
    FUN_008086e6(local_8,local_14);
    FUN_00808752(local_8,0,iVar1 + -0x8c,local_c,0,0);
    local_14 = local_14 + 0x80;
    local_c = local_c + 0xe;
    local_8 = local_8 + 0xa8;
    iVar1 = iVar1 + 0x38;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  local_18 = param_1 + 0x3ba;
  local_c = param_1 + 0x3200;
  iVar1 = param_1 + 0x1a74;
  local_8 = param_1 + 0x1204;
  param_1 = param_1 + 0x13b4;
  local_24 = 3;
  do {
    local_10 = local_18;
    local_20 = 2;
    local_1c = param_1;
    do {
      param_1 = local_1c;
      local_14 = local_10;
      local_1c = 6;
      do {
        FUN_0080023d(local_14,param_1);
        FUN_008085a4(iVar1,param_1,0xc);
        FUN_008086e6(iVar1,local_c);
        FUN_00808752(iVar1,0,param_1 + -0x870,local_8,0,0);
        local_14 = local_14 + 0xb;
        local_c = local_c + 0x80;
        local_8 = local_8 + 0xc;
        param_1 = param_1 + 0x30;
        iVar1 = iVar1 + 0x90;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_10 = local_10 + 0xc6;
      local_20 = local_20 + -1;
      local_1c = param_1;
    } while (local_20 != 0);
    local_18 = local_18 + 0x42;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return;
}

