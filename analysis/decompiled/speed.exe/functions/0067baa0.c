/* speed.exe 0067baa0 FUN_0067baa0; analysis pseudocode, not buildable source.
 * calls 006722c0 FUN_006722c0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __fastcall FUN_0067baa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ad88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006722c0();
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 4;
  }
  puVar1 = param_1 + 0x39;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x3a] = puVar2;
  FUN_005d7930();
  DAT_0092c670 = DAT_0092c670 + 1;
  *puVar1 = &PTR_FUN_008a96cc;
  *puVar1 = &PTR_LAB_008a9d80;
  *param_1 = &PTR_FUN_008a9d5c;
  param_1[2] = &PTR_LAB_008a9d54;
  param_1[0xb] = &PTR_LAB_008a9d38;
  param_1[0xd] = &PTR_LAB_008a9cb8;
  param_1[0x10] = &PTR_LAB_008a9cac;
  param_1[0x25] = &PTR_LAB_008a9c90;
  param_1[0x27] = &PTR_LAB_008a9c88;
  ExceptionList = local_c;
  return param_1;
}

