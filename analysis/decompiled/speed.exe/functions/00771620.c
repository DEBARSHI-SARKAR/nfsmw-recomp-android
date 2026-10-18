/* speed.exe 00771620 FUN_00771620; analysis pseudocode, not buildable source.
 * calls 00771120 FUN_00771120
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00771620(int param_1)

{
  FUN_00771120();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x48,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

