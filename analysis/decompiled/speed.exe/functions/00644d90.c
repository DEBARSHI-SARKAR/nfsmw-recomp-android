/* speed.exe 00644d90 FUN_00644d90; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00635400 FUN_00635400
 */

void __fastcall FUN_00644d90(int param_1)

{
  FUN_00635400();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

