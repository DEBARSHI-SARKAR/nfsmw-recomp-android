/* speed.exe 0070de60 FUN_0070de60; analysis pseudocode, not buildable source.
 * calls 00705500 FUN_00705500
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070de60(int param_1)

{
  FUN_00705500();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

