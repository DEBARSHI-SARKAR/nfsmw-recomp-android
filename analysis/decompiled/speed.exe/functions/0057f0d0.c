/* speed.exe 0057f0d0 FUN_0057f0d0; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0057f0d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0fe0;
  local_4 = 0;
  if (param_1[0xb] != -1) {
    FUN_00516c50(param_1[0xb],param_1[0x96],param_1[0x9d]);
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

