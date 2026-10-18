/* speed.exe 0054e6d0 FUN_0054e6d0; analysis pseudocode, not buildable source.
 * calls 00542260 FUN_00542260
 * calls 00586290 FUN_00586290
 */

undefined4 * __thiscall FUN_0054e6d0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089e9ec;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_00542260();
  ExceptionList = local_c;
  return param_1;
}

