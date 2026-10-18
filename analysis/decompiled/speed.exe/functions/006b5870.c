/* speed.exe 006b5870 FUN_006b5870; analysis pseudocode, not buildable source.
 * calls 0041c130 FUN_0041c130
 * calls 006b15d0 FUN_006b15d0
 * calls 005d51f0 FUN_005d51f0
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_006b5870(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087d718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ac2c0;
  local_4 = 0;
  FUN_006b15d0();
  iVar1 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,param_1[2]);
  FUN_0041c130(iVar1,iVar1 + 8);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  ExceptionList = local_c;
  return;
}

