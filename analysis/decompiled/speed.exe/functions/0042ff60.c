/* speed.exe 0042ff60 FUN_0042ff60; analysis pseudocode, not buildable source.
 * calls 0040d3c0 FUN_0040d3c0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0042ff60(int param_1)

{
  FUN_0040d3c0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

