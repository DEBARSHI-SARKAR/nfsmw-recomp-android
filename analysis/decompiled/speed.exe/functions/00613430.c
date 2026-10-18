/* speed.exe 00613430 FUN_00613430; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0060c450 FUN_0060c450
 */

void __fastcall FUN_00613430(int param_1)

{
  FUN_0060c450();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

