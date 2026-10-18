/* speed.exe 006875f0 FUN_006875f0; analysis pseudocode, not buildable source.
 * calls 00686c20 FUN_00686c20
 * calls 005d5a50 FUN_005d5a50
 * calls 0067ae10 FUN_0067ae10
 */

void __fastcall FUN_006875f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ba78;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x2b;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008aa7c0;
  param_1[2] = &PTR_LAB_008aa7b8;
  param_1[0xb] = &PTR_LAB_008aa728;
  param_1[0xe] = &PTR_LAB_008aa70c;
  param_1[0x10] = &PTR_LAB_008aa6f0;
  *puVar1 = &PTR_LAB_008aa7d4;
  local_4 = 0;
  *puVar1 = &PTR_FUN_008aa128;
  FUN_0067ae10();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00686c20();
  ExceptionList = local_c;
  return;
}

