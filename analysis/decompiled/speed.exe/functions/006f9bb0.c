/* speed.exe 006f9bb0 FUN_006f9bb0; analysis pseudocode, not buildable source.
 * calls 007310b0 FUN_007310b0
 * calls 00723820 FUN_00723820
 * calls 005fad10 FUN_005fad10
 * calls 00723920 FUN_00723920
 * calls 004519d0 FUN_004519d0
 * calls 0042e340 FUN_0042e340
 * calls 006f94d0 FUN_006f94d0
 * calls 007915c0 FUN_007915c0
 * calls 00733710 FUN_00733710
 * calls 00793910 FUN_00793910
 * calls 005d7930 FUN_005d7930
 * calls 005fb710 FUN_005fb710
 * calls 00730370 FUN_00730370
 * calls 005fae00 FUN_005fae00
 * calls 00791500 FUN_00791500
 */

undefined4 * __fastcall FUN_006f9bb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087f364;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_006f94d0(4);
  local_14 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x13] = puVar4;
  FUN_005d7930(&LAB_006e8280,puVar1);
  *puVar1 = &PTR_FUN_008b03ec;
  local_14._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar2 = param_1 + 0x14;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x15] = puVar4;
  FUN_005d7930(&LAB_006200e0,puVar2);
  *puVar2 = &PTR_FUN_008b03f4;
  local_14._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  FUN_0042e340(puVar4);
  local_14._0_1_ = 3;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar2 = param_1 + 0x18;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x19] = puVar4;
  FUN_005d7930(&LAB_006e9970,puVar2);
  if (param_1 == (undefined4 *)0xffffff98) {
    DAT_0092c678 = (undefined4 *)0x0;
  }
  else {
    DAT_0092c678 = param_1 + 0x18;
  }
  *puVar2 = &PTR_FUN_008b0580;
  *puVar2 = &PTR_LAB_008b0a58;
  *param_1 = &PTR_FUN_008b0ac0;
  param_1[2] = &PTR_LAB_008b0ab8;
  param_1[0xb] = &PTR_LAB_008b0aa4;
  param_1[0xe] = &PTR_LAB_008b0a88;
  *puVar1 = &PTR_LAB_008b0a80;
  param_1[0x14] = &PTR_LAB_008b0a74;
  param_1[0x16] = &PTR_LAB_008b0a64;
  param_1[0x1a] = 0;
  pfVar3 = (float *)(param_1 + 0x1b);
  *pfVar3 = DAT_008a2fb4;
  param_1[0x1c] = DAT_008a2fb8;
  param_1[0x1d] = DAT_008a2fbc;
  local_14 = CONCAT31(local_14._1_3_,4);
  if (DAT_00926064 == 0) {
    local_38 = *(undefined4 *)(DAT_0091cf90 + 0x18c);
  }
  else {
    local_38 = FUN_004519d0("4.1.4");
  }
  FUN_005fb710(local_38);
  FUN_005fad10(pfVar3);
  FUN_005fae00(param_1 + 0x1e);
  FUN_00733710(pfVar3,param_1 + 0x1e);
  if (DAT_009885e0 != 0) {
    local_28 = param_1[0x1c];
    local_30 = param_1[0x1d];
    local_2c = -*pfVar3;
    FUN_00723920();
    FUN_00723820(0,&local_30);
    FUN_007310b0();
    FUN_00730370();
  }
  FUN_00793910(local_38);
  FUN_00791500(local_38);
  uVar5 = 1;
  FUN_00793910(1);
  FUN_007915c0(uVar5);
  ExceptionList = local_1c;
  return param_1;
}

