/* speed.exe 0056dbb0 FUN_0056dbb0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_0056dbb0(int param_1)

{
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}

