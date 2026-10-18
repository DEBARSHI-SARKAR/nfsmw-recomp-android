/* speed.exe 0044cc10 FUN_0044cc10; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0044cc10(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869a0b;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089389c;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  local_4 = 0;
  _DAT_0090da0c = FUN_00460bf0("StartCountdown");
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

