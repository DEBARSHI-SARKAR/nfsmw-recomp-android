/* speed.exe 0067f760 FUN_0067f760; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0067b970 FUN_0067b970
 */

void __fastcall FUN_0067f760(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b1c8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  local_4 = 0;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xe4);
  }
  ExceptionList = &local_c;
  *puVar1 = &PTR_FUN_008a96cc;
  DAT_0092c670 = DAT_0092c670 + -1;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_0067b970();
  ExceptionList = local_c;
  return;
}

