/* speed.exe 0041b900 FUN_0041b900; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041b050 FUN_0041b050
 */

void __fastcall FUN_0041b900(int param_1)

{
  FUN_0041b050();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

