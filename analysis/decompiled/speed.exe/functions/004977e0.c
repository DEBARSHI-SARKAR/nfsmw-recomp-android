/* speed.exe 004977e0 FUN_004977e0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004977e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ae98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00895908;
  local_4 = 0;
  if (param_1[8] != 0) {
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[8]);
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[10]);
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[0xb]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = local_c;
  return;
}

