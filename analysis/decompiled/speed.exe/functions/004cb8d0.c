/* speed.exe 004cb8d0 FUN_004cb8d0; analysis pseudocode, not buildable source.
 * calls 004c0800 FUN_004c0800
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004cb8d0(int param_1)

{
  FUN_004c0800();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

