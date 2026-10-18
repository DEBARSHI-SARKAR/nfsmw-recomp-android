/* speed.exe 00413e40 FUN_00413e40; analysis pseudocode, not buildable source.
 * calls 006ee930 FUN_006ee930
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00413e40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891090;
  param_1[2] = &PTR_LAB_00891088;
  local_4 = 0;
  if (param_1[0x2b] != 0) {
    FUN_006e9c90(param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f9c;
  param_1[2] = &PTR_LAB_00890f94;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

