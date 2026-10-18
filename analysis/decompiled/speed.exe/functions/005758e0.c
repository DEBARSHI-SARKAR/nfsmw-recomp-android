/* speed.exe 005758e0 FUN_005758e0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005758e0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x3c));
  }
  return;
}

