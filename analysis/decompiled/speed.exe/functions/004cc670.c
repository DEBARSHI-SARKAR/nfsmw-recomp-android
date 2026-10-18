/* speed.exe 004cc670 FUN_004cc670; analysis pseudocode, not buildable source.
 * calls 004c0780 FUN_004c0780
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004cc670(int param_1)

{
  FUN_004c0780();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

