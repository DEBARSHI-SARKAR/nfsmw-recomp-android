/* speed.exe 00654af0 FUN_00654af0; analysis pseudocode, not buildable source.
 * calls 0062ba50 FUN_0062ba50
 * calls 00627400 FUN_00627400
 */

void __thiscall FUN_00654af0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a05f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = FUN_00627400();
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062ba50(param_1);
  }
  ExceptionList = local_c;
  return;
}

