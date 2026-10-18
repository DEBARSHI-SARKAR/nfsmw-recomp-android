/* speed.exe 00633a00 FUN_00633a00; analysis pseudocode, not buildable source.
 * calls 00452950 FUN_00452950
 */

int __thiscall FUN_00633a00(int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00452950(param_2);
  local_4 = 0;
  FUN_00452950(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  ExceptionList = local_c;
  return param_1;
}

