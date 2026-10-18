/* speed.exe 0069d0a0 FUN_0069d0a0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_0069d0a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087c4df;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0045a430();
  puVar1 = (undefined4 *)0x0;
  local_4 = local_4 & 0xffffff00;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x13;
  }
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

