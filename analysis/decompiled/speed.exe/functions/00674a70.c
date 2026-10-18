/* speed.exe 00674a70 FUN_00674a70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0066dd70 FUN_0066dd70
 */

void __fastcall FUN_00674a70(int param_1)

{
  FUN_0066dd70();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

