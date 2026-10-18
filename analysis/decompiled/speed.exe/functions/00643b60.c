/* speed.exe 00643b60 FUN_00643b60; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 005d51f0 FUN_005d51f0
 * calls 0041c130 FUN_0041c130
 */

void __fastcall FUN_00643b60(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7e18;
  local_4 = 0;
  iVar1 = FUN_005d51f0(DAT_00920eac,DAT_00920eac + DAT_00920eb4 * 8,param_1[2]);
  FUN_0041c130(iVar1,iVar1 + 8);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  ExceptionList = local_c;
  return;
}

