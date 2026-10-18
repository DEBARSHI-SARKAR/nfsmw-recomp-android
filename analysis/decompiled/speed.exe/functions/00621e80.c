/* speed.exe 00621e80 FUN_00621e80; analysis pseudocode, not buildable source.
 * calls 0064a7a0 FUN_0064a7a0
 */

undefined4 * __thiscall FUN_00621e80(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a6c34;
  param_1[2] = param_2;
  FUN_0064a7a0(2);
  ExceptionList = local_c;
  return param_1;
}

