/* speed.exe 00790750 FUN_00790750; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_00790750(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x20));
  }
  return;
}

