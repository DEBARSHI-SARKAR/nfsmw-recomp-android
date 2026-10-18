/* speed.exe 004ccdf0 FUN_004ccdf0; analysis pseudocode, not buildable source.
 * calls 004cb770 FUN_004cb770
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004ccdf0(int param_1)

{
  FUN_004cb770();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x2c,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

