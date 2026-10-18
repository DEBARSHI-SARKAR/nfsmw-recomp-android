/* speed.exe 005ee450 FUN_005ee450; analysis pseudocode, not buildable source.
 * calls 005e6990 FUN_005e6990
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005ee450(int param_1)

{
  FUN_005e6990();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

