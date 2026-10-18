/* speed.exe 005ddc40 FUN_005ddc40; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005ddc40(int param_1)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0xb0));
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}

