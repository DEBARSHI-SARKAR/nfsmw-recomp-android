/* speed.exe 00700840 FUN_00700840; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_00700840(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b1ee0;
  local_4 = 0;
  if (param_1[0xf] != 0) {
    FUN_00664cc0(param_1[0xf]);
  }
  if (param_1[0x10] != 0) {
    FUN_00664cc0(param_1[0x10]);
  }
  if (param_1[0x11] != 0) {
    FUN_00664cc0(param_1[0x11]);
  }
  *param_1 = &PTR_LAB_008b1e98;
  ExceptionList = local_c;
  return;
}

