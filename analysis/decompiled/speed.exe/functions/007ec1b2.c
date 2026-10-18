/* speed.exe 007ec1b2 FUN_007ec1b2; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000067 DeleteCriticalSection
 */

void __fastcall FUN_007ec1b2(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}

