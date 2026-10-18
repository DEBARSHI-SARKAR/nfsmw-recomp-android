/* speed.exe 008352e9 FUN_008352e9; analysis pseudocode, not buildable source.
 * calls 00835054 FUN_00835054
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

void __fastcall FUN_008352e9(int param_1)

{
  FUN_00835054(1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}

