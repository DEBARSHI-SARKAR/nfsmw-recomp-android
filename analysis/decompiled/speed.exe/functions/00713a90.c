/* speed.exe 00713a90 FUN_00713a90; analysis pseudocode, not buildable source.
 * calls 00711f30 FUN_00711f30
 */

int __thiscall FUN_00713a90(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00880048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_00711f30(param_2);
  ExceptionList = local_c;
  return param_1;
}

