/* speed.exe 005dca20 FUN_005dca20; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005dca20(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

