/* speed.exe 00416860 FUN_00416860; analysis pseudocode, not buildable source.
 * calls 00403ed0 FUN_00403ed0
 * calls 00409ad0 FUN_00409ad0
 */

void __fastcall FUN_00416860(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890dec;
  local_4 = 0;
  FUN_00403ed0();
  local_4 = 0xffffffff;
  FUN_00409ad0();
  ExceptionList = local_c;
  return;
}

