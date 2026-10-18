/* speed.exe 005af910 FUN_005af910; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005af910(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

