/* speed.exe 006b8d80 thunk_FUN_006b6910; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_006b6910(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_0087d8bf;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x1d;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ac6bc;
  param_1[2] = &PTR_LAB_008ac6b4;
  param_1[0x12] = &PTR_LAB_008ac670;
  *puVar1 = &PTR_LAB_008ac658;
  uStack_4 = 1;
  FUN_006466b0();
  uStack_4 = uStack_4 & 0xffffff00;
  *puVar1 = &PTR_FUN_008ac12c;
  FUN_006b13d0();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  uStack_4 = 0xffffffff;
  FUN_0069ccc0();
  ExceptionList = pvStack_c;
  return;
}

