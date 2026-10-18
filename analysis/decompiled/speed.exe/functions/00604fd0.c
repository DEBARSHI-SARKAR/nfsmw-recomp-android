/* speed.exe 00604fd0 FUN_00604fd0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00621c40 FUN_00621c40
 */

void __thiscall FUN_00604fd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008764ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00627400(0xc,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00621c40(param_2);
  }
  ExceptionList = local_c;
  return;
}

