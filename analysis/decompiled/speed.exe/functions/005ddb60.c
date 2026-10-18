/* speed.exe 005ddb60 FUN_005ddb60; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005ddb60(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}

