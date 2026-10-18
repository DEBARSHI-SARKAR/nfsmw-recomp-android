/* speed.exe 0084bd60 FUN_0084bd60; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

void FUN_0084bd60(DWORD *param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  
  pDVar4 = param_1;
  if (param_1 == (DWORD *)0x0) {
    pDVar4 = &DAT_009c3718;
  }
  while( true ) {
    pDVar3 = param_1;
    if (param_1 == (DWORD *)0x0) {
      pDVar3 = &DAT_009c3718;
    }
    DVar1 = GetCurrentThreadId();
    if (*pDVar3 == DVar1) break;
    LVar2 = InterlockedExchange((LONG *)(pDVar3 + 2),1);
    if (LVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(pDVar3 + 3));
      DVar1 = GetCurrentThreadId();
      *pDVar3 = DVar1;
      break;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(pDVar4 + 3));
    LVar2 = InterlockedExchange((LONG *)(pDVar4 + 2),1);
    if (LVar2 == 0) {
      DVar1 = GetCurrentThreadId();
      *pDVar4 = DVar1;
      pDVar4[1] = pDVar4[1] + 1;
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(pDVar4 + 3));
    Sleep(1);
  }
  pDVar3[1] = pDVar3[1] + 1;
  return;
}

