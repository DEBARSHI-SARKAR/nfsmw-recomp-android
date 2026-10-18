/* speed.exe 00605500 FUN_00605500; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 0062c9a0 FUN_0062c9a0
 */

void __fastcall FUN_00605500(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087657f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0xc,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062c9a0(0);
  }
  ExceptionList = local_c;
  return;
}

