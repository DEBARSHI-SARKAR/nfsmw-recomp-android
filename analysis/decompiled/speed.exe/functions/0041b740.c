/* speed.exe 0041b740 FUN_0041b740; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041ae00 FUN_0041ae00
 */

void __fastcall FUN_0041b740(int param_1)

{
  FUN_0041ae00();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

