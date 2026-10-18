/* speed.exe 00486210 FUN_00486210; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_00486210(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

