/* speed.exe 005f7030 FUN_005f7030; analysis pseudocode, not buildable source.
 * calls 005eb960 FUN_005eb960
 * calls 005d5a50 FUN_005d5a50
 * calls 005d0370 FUN_005d0370
 * calls 005f2780 FUN_005f2780
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005e5c10 FUN_005e5c10
 * calls 0065aed0 FUN_0065aed0
 * calls 005f2900 FUN_005f2900
 * calls 005ebf90 FUN_005ebf90
 * calls 005edd60 FUN_005edd60
 * calls 004258d0 FUN_004258d0
 * calls 005f2a80 FUN_005f2a80
 * calls 005d59e0 FUN_005d59e0
 * calls 004655f0 FUN_004655f0
 * calls 005ee0f0 FUN_005ee0f0
 * calls 005e3e60 FUN_005e3e60
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005f1830 FUN_005f1830
 */

void __fastcall FUN_005f7030(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00875cc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a3ab4;
  iVar1 = param_1[0x20];
  local_4 = 8;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x22] - iVar1 >> 2) << 2,0);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (param_1[0x2c] != 0) {
    thunk_FUN_007c7250(param_1[0x2c]);
  }
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  if (param_1[0x2a] != 0) {
    thunk_FUN_007c7250(param_1[0x2a]);
  }
  iVar1 = param_1[0xaf];
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  while (iVar1 != 0) {
    FUN_005edd60(0);
    iVar1 = param_1[0xaf];
  }
  FUN_005ebf90();
  FUN_005e3e60("gpcore");
  FUN_005ee0f0();
  if (param_1[0xb1] != 0) {
    thunk_FUN_007c7250(param_1[0xb1]);
  }
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  if (param_1[0x1e] != 0) {
    FUN_004655f0(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (param_1[0xd] != 0) {
    thunk_FUN_007c7250(param_1[0xd]);
    param_1[0xd] = 0;
  }
  if (param_1[0x10] != 0) {
    thunk_FUN_007c7250(param_1[0x10]);
    param_1[0x10] = 0;
  }
  if (param_1[0x12] != 0) {
    thunk_FUN_007c7250(param_1[0x12]);
    param_1[0x12] = 0;
  }
  FUN_005eb960();
  FUN_005f1830();
  if (param_1[7] != 0) {
    FUN_0065aed0(param_1[7]);
    param_1[7] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_005e5c10();
  if (param_1[0xaa] != 0) {
    FUN_005d0370(param_1[0xaa],0xc,0);
  }
  param_1[0xaa] = 0;
  local_4._0_1_ = 6;
  _eh_vector_destructor_iterator_(param_1 + 0x51,0x24,8,(_func_void_void_ptr *)&DAT_005ddef0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_005f2a80(local_10,*(undefined4 *)param_1[0x4f],(undefined4 *)param_1[0x4f]);
  if (param_1[0x4f] != 0) {
    FUN_005d0370(param_1[0x4f],0x18,0);
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005f2a80(local_10,*(undefined4 *)param_1[0x4c],(undefined4 *)param_1[0x4c]);
  if (param_1[0x4c] != 0) {
    FUN_005d0370(param_1[0x4c],0x18,0);
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005f2900(local_10,*(undefined4 *)param_1[0x27],(undefined4 *)param_1[0x27]);
  if (param_1[0x27] != 0) {
    FUN_005d0370(param_1[0x27],0x24,0);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005f2780(local_10,*(undefined4 *)param_1[0x24],(undefined4 *)param_1[0x24]);
  if (param_1[0x24] != 0) {
    FUN_005d0370(param_1[0x24],0x18,0);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  iVar1 = param_1[0x20];
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x22] - iVar1 >> 2) << 2,0);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  *param_1 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

