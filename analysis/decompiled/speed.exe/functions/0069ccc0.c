/* speed.exe 0069ccc0 FUN_0069ccc0; analysis pseudocode, not buildable source.
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_0069ccc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087c498;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ab598;
  param_1[2] = &PTR_LAB_008ab590;
  *puVar1 = &PTR_LAB_008ab5c8;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

