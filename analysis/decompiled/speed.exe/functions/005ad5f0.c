/* speed.exe 005ad5f0 FUN_005ad5f0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005ad5f0(int param_1)

{
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

