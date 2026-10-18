/* speed.exe 00674bf0 FUN_00674bf0; analysis pseudocode, not buildable source.
 * calls 00674280 FUN_00674280
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00674bf0(int param_1)

{
  FUN_00674280();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x14,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

