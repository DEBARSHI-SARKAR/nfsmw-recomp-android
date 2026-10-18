/* speed.exe 0048c970 FUN_0048c970; analysis pseudocode, not buildable source.
 * calls 0048c1e0 FUN_0048c1e0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0048c970(int param_1)

{
  FUN_0048c1e0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

