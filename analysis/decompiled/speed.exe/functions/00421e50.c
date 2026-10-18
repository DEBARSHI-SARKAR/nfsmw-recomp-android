/* speed.exe 00421e50 FUN_00421e50; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 006ee930 FUN_006ee930
 */

void __fastcall FUN_00421e50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008914cc;
  param_1[2] = &PTR_LAB_008914c4;
  local_4 = 0;
  if (param_1[0x16] != 0) {
    FUN_00664cc0(param_1[0x16]);
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f9c;
  param_1[2] = &PTR_LAB_00890f94;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

