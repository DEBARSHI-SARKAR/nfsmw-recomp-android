/* speed.exe 005af8e0 FUN_005af8e0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005af8e0(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

