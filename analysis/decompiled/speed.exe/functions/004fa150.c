/* speed.exe 004fa150 FUN_004fa150; analysis pseudocode, not buildable source.
 * calls 004f9e40 FUN_004f9e40
 */

int __fastcall FUN_004fa150(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086dda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_004f9e40(0x80);
  ExceptionList = local_c;
  return param_1;
}

