/* speed.exe 0072dff0 FUN_0072dff0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0072c8e0 FUN_0072c8e0
 */

void __fastcall FUN_0072dff0(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    DAT_009a3a70 = DAT_009a3a70 + -1;
    FUN_0072c8e0(*(undefined4 *)(param_1 + 0x5c),0);
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_007c7250(*(int *)(param_1 + 0x5c));
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

