/* speed.exe 0041a5e0 FUN_0041a5e0; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00460bf0 FUN_00460bf0
 * calls 006e8e90 FUN_006e8e90
 * calls 005cc240 FUN_005cc240
 * calls 006f94d0 FUN_006f94d0
 * calls 007658a0 FUN_007658a0
 * calls 00466340 FUN_00466340
 * calls 006ee9b0 FUN_006ee9b0
 * calls 00506af0 FUN_00506af0
 */

undefined4 * __fastcall FUN_0041a5e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867c8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0(0);
  DAT_0090d8e4 = param_1;
  if (param_1 + 0x12 == (undefined4 *)0x0) {
    DAT_0090d8e4 = (undefined4 *)0x0;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_00891204;
  param_1[2] = &PTR_LAB_008911fc;
  param_1[0xb] = &PTR_LAB_008911e8;
  param_1[0xe] = &PTR_LAB_008911cc;
  FUN_0077b9e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_00466340(DAT_00915fb4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  param_1[0x19] = iVar1;
  uVar2 = FUN_00460bf0("MARKER_DIRECTION_AID");
  FUN_00506af0(uVar2);
  local_14 = FUN_005cc240("WorldUpdate");
  uVar2 = FUN_006ee9b0(&local_14,0x3f800000,0,1);
  param_1[0x15] = uVar2;
  FUN_006e8e90(uVar2,&DAT_008911a4);
  param_1[0x12] = DAT_008a2fb4;
  param_1[0x13] = DAT_008a2fb8;
  param_1[0x14] = DAT_008a2fbc;
  param_1[0x16] = DAT_008a2fb4;
  param_1[0x17] = DAT_008a2fb8;
  param_1[0x18] = DAT_008a2fbc;
  param_1[0x1a] = DAT_008a2fb4;
  param_1[0x1b] = DAT_008a2fb8;
  param_1[0x1c] = DAT_008a2fbc;
  param_1[0x1d] = 0;
  param_1[0x3c] = 3;
  FUN_007658a0(3);
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xd8] = 0x41a00000;
  param_1[0xdc] = 0x43480000;
  ExceptionList = local_c;
  return param_1;
}

