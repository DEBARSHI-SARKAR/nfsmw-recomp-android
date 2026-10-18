/* speed.exe 00700cd0 FUN_00700cd0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_00700cd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b1f4c;
  local_4 = 0;
  if (param_1[0x14] != 0) {
    FUN_00664cc0(param_1[0x14]);
  }
  if (param_1[0x15] != 0) {
    FUN_00664cc0(param_1[0x15]);
  }
  if (param_1[0x16] != 0) {
    FUN_00664cc0(param_1[0x16]);
  }
  if (param_1[0x17] != 0) {
    FUN_00664cc0(param_1[0x17]);
  }
  if (param_1[0x18] != 0) {
    FUN_00664cc0(param_1[0x18]);
  }
  *param_1 = &PTR_LAB_008b1e98;
  ExceptionList = local_c;
  return;
}

