/* speed.exe 004b3390 FUN_004b3390; analysis pseudocode, not buildable source.
 * calls 004f4a30 FUN_004f4a30
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_004b3390(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086b4af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896b24;
  local_4 = 3;
  FUN_0045a430();
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00896af0;
  FUN_004f4a30();
  ExceptionList = local_c;
  return;
}

