/* speed.exe 005e2770 FUN_005e2770; analysis pseudocode, not buildable source.
 * calls 005dac10 FUN_005dac10
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0045a430 FUN_0045a430
 * calls 005dd8e0 FUN_005dd8e0
 */

void __fastcall FUN_005e2770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874f97;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a39a8;
  local_4 = 0;
  FUN_005dd8e0(param_1);
  if ((*(byte *)(param_1 + 6) & 4) != 0) {
    thunk_FUN_007c7250(param_1[7]);
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfb;
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  param_1[7] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  FUN_005dac10();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

