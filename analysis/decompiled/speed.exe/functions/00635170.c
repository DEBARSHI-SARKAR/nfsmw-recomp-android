/* speed.exe 00635170 FUN_00635170; analysis pseudocode, not buildable source.
 * calls 00629550 FUN_00629550
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00635170(int param_1)

{
  FUN_00629550();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x1c,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

