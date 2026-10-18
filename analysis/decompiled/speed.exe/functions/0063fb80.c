/* speed.exe 0063fb80 FUN_0063fb80; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00635210 FUN_00635210
 */

void __fastcall FUN_0063fb80(int param_1)

{
  FUN_00635210();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x24,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

