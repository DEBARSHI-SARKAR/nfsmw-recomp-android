/* speed.exe 004c7900 FUN_004c7900; analysis pseudocode, not buildable source.
 * calls 00466330 FUN_00466330
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_004c7900(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086be3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089766c;
  local_4 = 1;
  if (DAT_009120c4 != 0) {
    FUN_00466330(DAT_009120c4);
  }
  if (DAT_009120c8 != 0) {
    FUN_00466330(DAT_009120c8);
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 1,8,3,FUN_004c78d0);
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

