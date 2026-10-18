/* speed.exe 00547690 FUN_00547690; analysis pseudocode, not buildable source.
 * calls 0051f4b0 FUN_0051f4b0
 * calls 00544dd0 FUN_00544dd0
 * calls 00662770 FUN_00662770
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_00547690(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00870126;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e6fc;
  local_14 = param_1[0x55];
  local_4 = 1;
  local_10 = param_1;
  FUN_00503360(&local_14,1);
  FUN_00662770();
  local_4 = local_4 & 0xffffff00;
  FUN_0051f4b0();
  local_4 = 0xffffffff;
  FUN_00544dd0();
  ExceptionList = local_c;
  return;
}

