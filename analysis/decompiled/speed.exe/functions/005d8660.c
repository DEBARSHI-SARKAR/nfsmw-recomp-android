/* speed.exe 005d8660 FUN_005d8660; analysis pseudocode, not buildable source.
 * calls 005d7120 FUN_005d7120
 */

int __thiscall FUN_005d8660(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_005d7120(param_2);
  ExceptionList = local_c;
  return param_1;
}

