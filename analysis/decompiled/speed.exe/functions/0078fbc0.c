/* speed.exe 0078fbc0 FUN_0078fbc0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_0078fbc0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0xc));
  }
  return;
}

