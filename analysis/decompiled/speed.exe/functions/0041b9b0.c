/* speed.exe 0041b9b0 FUN_0041b9b0; analysis pseudocode, not buildable source.
 * calls 0040d1e0 FUN_0040d1e0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0041b9b0(int param_1)

{
  FUN_0040d1e0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x44,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

