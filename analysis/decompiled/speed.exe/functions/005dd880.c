/* speed.exe 005dd880 FUN_005dd880; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005dd880(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

