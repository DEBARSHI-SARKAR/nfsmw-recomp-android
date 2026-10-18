/* speed.exe 006816e0 FUN_006816e0; analysis pseudocode, not buildable source.
 * calls 00675870 FUN_00675870
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006816e0(int param_1)

{
  FUN_00675870();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x34,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

