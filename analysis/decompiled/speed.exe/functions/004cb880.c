/* speed.exe 004cb880 FUN_004cb880; analysis pseudocode, not buildable source.
 * calls 004c0780 FUN_004c0780
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004cb880(int param_1)

{
  FUN_004c0780();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

