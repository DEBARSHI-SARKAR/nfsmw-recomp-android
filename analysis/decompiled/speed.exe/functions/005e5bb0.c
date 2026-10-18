/* speed.exe 005e5bb0 FUN_005e5bb0; analysis pseudocode, not buildable source.
 * calls 005e5a90 FUN_005e5a90
 * calls 00503c30 FUN_00503c30
 */

void __fastcall FUN_005e5bb0(int param_1)

{
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    FUN_005e5a90();
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x2b) = 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 1;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00503c30();
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
  }
  return;
}

