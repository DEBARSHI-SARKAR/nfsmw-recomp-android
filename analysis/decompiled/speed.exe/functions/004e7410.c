/* speed.exe 004e7410 FUN_004e7410; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 004b0000 FUN_004b0000
 * calls 0081bab9 FUN_0081bab9
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_004e7410(int param_1)

{
  int iVar1;
  
  FUN_00829310(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1));
  *(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x34 + param_1) = 0;
  iVar1 = *(int *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = 0xfffffffe;
  if (iVar1 != 0) {
    FUN_004b0000();
    thunk_FUN_007c7250(iVar1);
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
  FUN_0081bab9();
  return;
}

