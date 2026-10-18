/* speed.exe 007ec1a7 FUN_007ec1a7; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000080 InitializeCriticalSection
 */

void __fastcall FUN_007ec1a7(int param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}

