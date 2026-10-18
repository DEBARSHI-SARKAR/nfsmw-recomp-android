/* speed.exe 00759410 FUN_00759410; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 * calls 007592e0 FUN_007592e0
 */

void __thiscall FUN_00759410(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088114b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00466340(DAT_009b09b8,param_1);
  local_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007592e0(param_2);
  }
  *(int *)(iVar1 + 0xe8) = *(int *)(iVar1 + 0xe8) + 1;
  ExceptionList = local_c;
  return;
}

