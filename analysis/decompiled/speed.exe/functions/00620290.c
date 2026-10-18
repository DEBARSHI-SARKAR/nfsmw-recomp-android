/* speed.exe 00620290 FUN_00620290; analysis pseudocode, not buildable source.
 * calls 005f5120 FUN_005f5120
 */

void __fastcall FUN_00620290(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6728;
  local_4 = 0;
  if (DAT_0091e00c != 0) {
    FUN_005f5120(param_1[2]);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

