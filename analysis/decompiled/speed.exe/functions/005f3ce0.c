/* speed.exe 005f3ce0 FUN_005f3ce0; analysis pseudocode, not buildable source.
 * calls 005e6e40 FUN_005e6e40
 * calls 005eabb0 FUN_005eabb0
 */

int __thiscall FUN_005f3ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00875980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005e6e40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0xf) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  FUN_005eabb0(param_2);
  ExceptionList = local_10;
  return param_1;
}

