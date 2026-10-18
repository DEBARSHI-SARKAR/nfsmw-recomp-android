/* speed.exe 0073d850 FUN_0073d850; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_0073d850(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

