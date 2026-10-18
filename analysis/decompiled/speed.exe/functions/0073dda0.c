/* speed.exe 0073dda0 FUN_0073dda0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0073dda0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008809fc;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1c0));
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1c4));
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1c8));
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1d4));
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1cc));
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1d0));
  FUN_0045a430();
  local_4 = local_4 & 0xffffff00;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

