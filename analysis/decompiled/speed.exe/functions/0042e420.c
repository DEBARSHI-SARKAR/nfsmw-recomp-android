/* speed.exe 0042e420 FUN_0042e420; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005d5a50 FUN_005d5a50
 * calls 0041c130 FUN_0041c130
 */

void __fastcall FUN_0042e420(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00868308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089188c;
  local_4 = 0;
  iVar1 = FUN_005d51f0(DAT_00934ce4,DAT_00934ce4 + DAT_00934cec * 8,param_1[2]);
  FUN_0041c130(iVar1,iVar1 + 8);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  ExceptionList = local_c;
  return;
}

