/* speed.exe 00432180 FUN_00432180; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00431ae0 FUN_00431ae0
 */

void __fastcall FUN_00432180(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008685b8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x1cf;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891cf8;
  param_1[2] = &PTR_LAB_00891cf0;
  param_1[0x13] = &PTR_LAB_00891c18;
  param_1[0x15] = &PTR_LAB_00891c10;
  *puVar1 = &PTR_LAB_00891c08;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00431ae0();
  ExceptionList = local_c;
  return;
}

