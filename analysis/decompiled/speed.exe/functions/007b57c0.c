/* speed.exe 007b57c0 FUN_007b57c0; analysis pseudocode, not buildable source.
 * calls 004ab1c0 FUN_004ab1c0
 * calls 00581c20 FUN_00581c20
 */

int __fastcall FUN_007b57c0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008832ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ab1c0(0,0,0);
  local_4 = 0;
  FUN_00581c20();
  iVar1 = param_1 + 0x1b4;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x1b8) = iVar1;
  ExceptionList = local_c;
  return param_1;
}

