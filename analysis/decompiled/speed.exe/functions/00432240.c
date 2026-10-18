/* speed.exe 00432240 FUN_00432240; analysis pseudocode, not buildable source.
 * calls 00432060 FUN_00432060
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_00432240(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008685d8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x1d6;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891ec0;
  param_1[2] = &PTR_LAB_00891eb8;
  param_1[0x13] = &PTR_LAB_00891de0;
  param_1[0x15] = &PTR_LAB_00891dd8;
  *puVar1 = &PTR_LAB_00891d48;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00432060();
  ExceptionList = local_c;
  return;
}

