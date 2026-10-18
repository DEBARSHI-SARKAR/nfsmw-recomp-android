/* speed.exe 004b4e40 FUN_004b4e40; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 004f4a30 FUN_004f4a30
 * calls 00653a40 FUN_00653a40
 */

void __fastcall FUN_004b4e40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086b5b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896cf0;
  local_4 = 1;
  if (param_1[0x26] != 0) {
    FUN_00664cc0(param_1[0x26]);
  }
  if (param_1[0x27] != 0) {
    FUN_00664cc0(param_1[0x27]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00653a40();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00896af0;
  FUN_004f4a30();
  ExceptionList = local_c;
  return;
}

