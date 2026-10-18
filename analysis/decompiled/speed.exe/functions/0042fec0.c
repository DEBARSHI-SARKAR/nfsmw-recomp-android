/* speed.exe 0042fec0 FUN_0042fec0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0040d2a0 FUN_0040d2a0
 */

void __fastcall FUN_0042fec0(int param_1)

{
  FUN_0040d2a0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x1c,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

