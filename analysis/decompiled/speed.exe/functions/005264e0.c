/* speed.exe 005264e0 FUN_005264e0; analysis pseudocode, not buildable source.
 * calls 007ec413 FUN_007ec413
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005264e0(int param_1)

{
  FUN_007ec413(param_1 + 0x14,0);
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}

