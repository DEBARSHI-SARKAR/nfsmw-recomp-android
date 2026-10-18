/* speed.exe 0054a730 FUN_0054a730; analysis pseudocode, not buildable source.
 * calls 00593920 FUN_00593920
 * calls 00534de0 FUN_00534de0
 */

undefined4 * __thiscall FUN_0054a730(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008702d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e820;
  FUN_00534de0();
  ExceptionList = local_c;
  return param_1;
}

