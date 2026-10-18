/* speed.exe 006ee930 FUN_006ee930; analysis pseudocode, not buildable source.
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ee930(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087e9cf;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b0590;
  *puVar1 = &PTR_LAB_008b0598;
  _DAT_00988ec8 = _DAT_00988ec8 + -1;
  local_4 = 1;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = local_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

