/* speed.exe 0084bd10 FUN_0084bd10; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

undefined4 FUN_0084bd10(DWORD *param_1)

{
  DWORD DVar1;
  LONG LVar2;
  
  if (param_1 == (DWORD *)0x0) {
    param_1 = &DAT_009c3718;
  }
  DVar1 = GetCurrentThreadId();
  if (*param_1 != DVar1) {
    LVar2 = InterlockedExchange((LONG *)(param_1 + 2),1);
    if (LVar2 != 0) {
      return 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    DVar1 = GetCurrentThreadId();
    *param_1 = DVar1;
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}

