/* speed.exe 004b3af0 FUN_004b3af0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 004f4a30 FUN_004f4a30
 * calls 00653a40 FUN_00653a40
 */

void __fastcall FUN_004b3af0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086b54c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896bf0;
  local_4 = 3;
  if (param_1[0x73] != 0) {
    FUN_00664cc0(param_1[0x73]);
  }
  if (param_1[0x74] != 0) {
    FUN_00664cc0(param_1[0x74]);
  }
  local_4._0_1_ = 2;
  FUN_00653a40();
  local_4._0_1_ = 1;
  FUN_00653a40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00653a40();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00896af0;
  FUN_004f4a30();
  ExceptionList = local_c;
  return;
}

