/* speed.exe 0077cf70 FUN_0077cf70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00771120 FUN_00771120
 */

void __fastcall FUN_0077cf70(int param_1)

{
  FUN_00771120();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x48,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

