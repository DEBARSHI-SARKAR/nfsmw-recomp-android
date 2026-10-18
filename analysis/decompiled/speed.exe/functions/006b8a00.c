/* speed.exe 006b8a00 FUN_006b8a00; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006b1650 FUN_006b1650
 * calls 006b87d0 FUN_006b87d0
 */

void __fastcall FUN_006b8a00(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087dd08;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x2e;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ad350;
  param_1[2] = &PTR_LAB_008ad348;
  param_1[0x13] = &PTR_LAB_008ad324;
  param_1[0x15] = &PTR_FUN_008ad320;
  param_1[0x16] = &PTR_LAB_008ad314;
  param_1[0x18] = &PTR_LAB_008ad30c;
  *puVar1 = &PTR_LAB_008ad2fc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_008ac648;
  FUN_006b1650();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006b87d0();
  ExceptionList = local_c;
  return;
}

