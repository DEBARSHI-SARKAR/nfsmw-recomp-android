/* speed.exe 0042ff10 FUN_0042ff10; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041b0d0 FUN_0041b0d0
 */

void __fastcall FUN_0042ff10(int param_1)

{
  FUN_0041b0d0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

