/* speed.exe 0042fc40 FUN_0042fc40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041af70 FUN_0041af70
 */

void __fastcall FUN_0042fc40(int param_1)

{
  FUN_0041af70();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

