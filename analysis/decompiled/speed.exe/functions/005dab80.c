/* speed.exe 005dab80 FUN_005dab80; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005dab80(int param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x1c));
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfb;
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}

