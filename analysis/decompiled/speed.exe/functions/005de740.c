/* speed.exe 005de740 FUN_005de740; analysis pseudocode, not buildable source.
 * calls 00503c50 FUN_00503c50
 */

void __fastcall FUN_005de740(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00503c50();
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf7;
  return;
}

