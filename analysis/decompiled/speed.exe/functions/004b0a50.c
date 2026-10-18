/* speed.exe 004b0a50 FUN_004b0a50; analysis pseudocode, not buildable source.
 * calls 0081b93c FUN_0081b93c
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_004b0a50(int param_1)

{
  FUN_0081b93c();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004655f0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

