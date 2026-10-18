/* speed.exe 0067e800 FUN_0067e800; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0041c130 FUN_0041c130
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0067e800(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008aa098;
  local_4 = 0;
  iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
  FUN_0041c130(iVar1,iVar1 + 8);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  ExceptionList = local_c;
  return;
}

