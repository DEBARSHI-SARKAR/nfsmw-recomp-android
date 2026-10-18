/* speed.exe 00864b80 FUN_00864b80; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls 00865140 FUN_00865140
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

void FUN_00864b80(int param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  FUN_00865140(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}

