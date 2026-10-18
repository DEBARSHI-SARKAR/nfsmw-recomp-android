/* speed.exe 005dd7e0 FUN_005dd7e0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005dd7e0(int param_1)

{
  if (*(int *)(param_1 + 0x2c4) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x2c4));
  }
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  return;
}

