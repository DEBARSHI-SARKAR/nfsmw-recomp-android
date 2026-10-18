/* speed.exe 00535610 FUN_00535610; analysis pseudocode, not buildable source.
 * calls 00521ad0 FUN_00521ad0
 * calls 00593920 FUN_00593920
 */

undefined4 * __thiscall FUN_00535610(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089dc68;
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_00521ad0();
  ExceptionList = local_c;
  return param_1;
}

