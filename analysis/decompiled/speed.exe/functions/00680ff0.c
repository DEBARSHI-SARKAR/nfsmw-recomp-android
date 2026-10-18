/* speed.exe 00680ff0 FUN_00680ff0; analysis pseudocode, not buildable source.
 * calls 00675910 FUN_00675910
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00680ff0(int param_1)

{
  FUN_00675910();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

