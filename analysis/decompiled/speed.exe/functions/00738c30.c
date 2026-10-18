/* speed.exe 00738c30 FUN_00738c30; analysis pseudocode, not buildable source.
 * calls 004ff180 FUN_004ff180
 */

void __fastcall FUN_00738c30(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004ff180();
    return;
  }
  return;
}

