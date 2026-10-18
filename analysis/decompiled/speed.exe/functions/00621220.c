/* speed.exe 00621220 FUN_00621220; analysis pseudocode, not buildable source.
 * calls 004b9030 FUN_004b9030
 */

void __fastcall FUN_00621220(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6988;
  local_4 = 0;
  if (DAT_00911fa8 != 0) {
    FUN_004b9030();
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

