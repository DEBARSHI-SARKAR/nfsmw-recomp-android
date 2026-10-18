/* speed.exe 00621090 FUN_00621090; analysis pseudocode, not buildable source.
 * calls 005dd930 FUN_005dd930
 * calls 005fa3c0 FUN_005fa3c0
 */

void __fastcall FUN_00621090(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6940;
  local_4 = 0;
  iVar1 = FUN_005dd930(param_1[2]);
  iVar2 = FUN_005dd930(param_1[3]);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_005fa3c0(iVar2);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

