/* speed.exe 004cff40 FUN_004cff40; analysis pseudocode, not buildable source.
 * calls 004ca1a0 FUN_004ca1a0
 * calls 004b8a90 FUN_004b8a90
 */

int __fastcall FUN_004cff40(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c7c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b8a90();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_4 = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_004ca1a0();
  ExceptionList = local_c;
  return param_1;
}

