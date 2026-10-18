/* speed.exe 00792920 FUN_00792920; analysis pseudocode, not buildable source.
 * calls 0051a2f0 FUN_0051a2f0
 */

int __fastcall FUN_00792920(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  local_4 = 0;
  FUN_0051a2f0();
  *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  ExceptionList = local_c;
  return param_1;
}

