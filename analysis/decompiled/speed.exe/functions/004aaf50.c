/* speed.exe 004aaf50 FUN_004aaf50; analysis pseudocode, not buildable source.
 * calls 0045a8a0 FUN_0045a8a0
 */

void __fastcall FUN_004aaf50(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0045a8a0();
    return;
  }
  return;
}

