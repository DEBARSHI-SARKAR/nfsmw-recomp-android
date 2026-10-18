/* speed.exe 007ec1bd FUN_007ec1bd; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

void __fastcall FUN_007ec1bd(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}

