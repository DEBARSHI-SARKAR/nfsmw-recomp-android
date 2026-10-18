/* speed.exe 004f5290 FUN_004f5290; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004ea770 FUN_004ea770
 */

void __fastcall FUN_004f5290(int param_1)

{
  FUN_004ea770();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

