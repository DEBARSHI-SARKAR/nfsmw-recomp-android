/* speed.exe 006a8f30 thunk_FUN_0069ccc0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_0069ccc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0087c498;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ab598;
  param_1[2] = &PTR_LAB_008ab590;
  *puVar1 = &PTR_LAB_008ab5c8;
  uStack_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  uStack_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = pvStack_c;
  return;
}

