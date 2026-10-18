/* speed.exe 007ec1c8 FUN_007ec1c8; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

void __fastcall FUN_007ec1c8(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}

