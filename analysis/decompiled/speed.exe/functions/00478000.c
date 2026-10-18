/* speed.exe 00478000 FUN_00478000; analysis pseudocode, not buildable source.
 * calls 0046eae0 FUN_0046eae0
 * calls 00470a10 FUN_00470a10
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00478000(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00894f70;
  local_4 = 0;
  FUN_0046eae0();
  thunk_FUN_007c7250(param_1[0x21]);
  thunk_FUN_007c7250(param_1[0x22]);
  thunk_FUN_007c7250(param_1[0x23]);
  thunk_FUN_007c7250(param_1[0x24]);
  thunk_FUN_007c7250(param_1[0x25]);
  thunk_FUN_007c7250(param_1[0x26]);
  thunk_FUN_007c7250(param_1[0x27]);
  thunk_FUN_007c7250(param_1[0x28]);
  thunk_FUN_007c7250(param_1[0x29]);
  thunk_FUN_007c7250(param_1[0x2a]);
  thunk_FUN_007c7250(param_1[0x2b]);
  thunk_FUN_007c7250(param_1[0x2c]);
  *(undefined4 *)(param_1[7] + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1[7] + 200) = 0;
  if (DAT_00911020 == 0) {
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  if (DAT_00911020 == 0) {
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
  }
  iVar1 = param_1[7];
  *(undefined1 *)(iVar1 + 0x2a0) = 1;
  *(undefined4 *)(iVar1 + 0x2ac) = DAT_008f82f4;
  local_4 = 0xffffffff;
  FUN_00470a10();
  ExceptionList = local_c;
  return;
}

