/* speed.exe 006809c0 FUN_006809c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0066dd70 FUN_0066dd70
 */

void __fastcall FUN_006809c0(int param_1)

{
  FUN_0066dd70();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

