/* speed.exe 006651f0 FUN_006651f0; analysis pseudocode, not buildable source.
 * calls 00662ce0 FUN_00662ce0
 */

int __fastcall FUN_006651f0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_00662ce0(8);
  ExceptionList = local_c;
  return param_1;
}

