/* speed.exe 00518c30 FUN_00518c30; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_00518c30(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

