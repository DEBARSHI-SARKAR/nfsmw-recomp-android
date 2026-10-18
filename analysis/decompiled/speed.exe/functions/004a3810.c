/* speed.exe 004a3810 FUN_004a3810; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004a3810(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086af38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00895818;
  local_4 = 0;
  if (param_1[6] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[5]);
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[8]);
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[0xb]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = local_c;
  return;
}

