/* speed.exe 00403e50 FUN_00403e50; analysis pseudocode, not buildable source.
 * calls 0065c540 FUN_0065c540
 */

int __thiscall FUN_00403e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008675b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065c540(param_2);
  local_4 = 0;
  FUN_0065c540(param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0065c540(param_3);
  *(undefined4 *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  ExceptionList = local_c;
  return param_1;
}

