/* speed.exe 006b9cf0 thunk_FUN_006b8a00; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_006b8a00(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0087dd08;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 0x2e;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008ad350;
  param_1[2] = &PTR_LAB_008ad348;
  param_1[0x13] = &PTR_LAB_008ad324;
  param_1[0x15] = &PTR_FUN_008ad320;
  param_1[0x16] = &PTR_LAB_008ad314;
  param_1[0x18] = &PTR_LAB_008ad30c;
  *puVar1 = &PTR_LAB_008ad2fc;
  uStack_4 = 0;
  *puVar1 = &PTR_FUN_008ac648;
  FUN_006b1650();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  uStack_4 = 0xffffffff;
  FUN_006b87d0();
  ExceptionList = pvStack_c;
  return;
}

