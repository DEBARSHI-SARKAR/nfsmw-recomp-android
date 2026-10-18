/* speed.exe 006f9800 FUN_006f9800; analysis pseudocode, not buildable source.
 * calls 006ed0f0 FUN_006ed0f0
 * calls 007310b0 FUN_007310b0
 * calls 00723820 FUN_00723820
 * calls 00723920 FUN_00723920
 * calls 0042e340 FUN_0042e340
 * calls 00454810 FUN_00454810
 * calls 006f94d0 FUN_006f94d0
 * calls 00733710 FUN_00733710
 * calls 005d7930 FUN_005d7930
 * calls 006269b0 FUN_006269b0
 * calls 005cc240 FUN_005cc240
 * calls 005dca00 FUN_005dca00
 * calls 00730370 FUN_00730370
 * calls 005dcc70 FUN_005dcc70
 */

undefined4 * __fastcall FUN_006f9800(undefined4 *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087f304;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_34 = param_1;
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
  puVar1 = param_1 + 0x14;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x15] = puVar4;
  FUN_005d7930(&LAB_006200e0,puVar1);
  *puVar1 = &PTR_FUN_008b03f4;
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
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x19] = puVar4;
  FUN_005d7930(&LAB_006e9970,puVar1);
  if (param_1 == (undefined4 *)0xffffff98) {
    DAT_0092c678 = (undefined4 *)0x0;
  }
  else {
    DAT_0092c678 = param_1 + 0x18;
  }
  *puVar1 = &PTR_FUN_008b0580;
  *puVar1 = &PTR_LAB_008b0978;
  *param_1 = &PTR_FUN_008b09e0;
  param_1[2] = &PTR_LAB_008b09d8;
  param_1[0xb] = &PTR_LAB_008b09c4;
  param_1[0xe] = &PTR_LAB_008b09a8;
  param_1[0x12] = &PTR_LAB_008b09a0;
  param_1[0x14] = &PTR_LAB_008b0994;
  param_1[0x16] = &PTR_LAB_008b0984;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  pfVar2 = (float *)(param_1 + 0x1c);
  *pfVar2 = DAT_008a2fb4;
  param_1[0x1d] = DAT_008a2fb8;
  param_1[0x1e] = DAT_008a2fbc;
  local_14 = CONCAT31(local_14._1_3_,4);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_38 = FUN_005cc240("WorldUpdate");
  iVar3 = FUN_006ed0f0(&local_38,0x3f800000,param_1 + 2,0,0);
  if (iVar3 != 0) {
    param_1[9] = param_1[9] + 1;
  }
  param_1[0x1a] = iVar3;
  FUN_00733710(pfVar2,param_1 + 0x1f);
  iVar3 = FUN_005dca00();
  if (iVar3 != 0) {
    FUN_005dcc70();
    puVar4 = (undefined4 *)FUN_00454810(0xdec18d3e,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    if (((char *)*puVar4 != (char *)0x0) && (*(char *)*puVar4 != '\0')) {
      DAT_009aac81 = 1;
      ExceptionList = local_1c;
      return param_1;
    }
  }
  if (DAT_009885e0 != 0) {
    local_30 = param_1[0x1e];
    local_28 = param_1[0x1d];
    local_2c = -*pfVar2;
    FUN_00723920();
    FUN_00723820(0,&local_30);
    FUN_007310b0();
    FUN_00730370();
  }
  ExceptionList = local_1c;
  return param_1;
}

