/* speed.exe 0084bef0 FUN_0084bef0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls EXTERNAL:00000057 LeaveCriticalSection
 * calls EXTERNAL:00000082 InterlockedExchange
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084bef0(void)

{
  DWORD DVar1;
  LONG LVar2;
  int iVar3;
  
  DVar1 = GetCurrentThreadId();
  if (DAT_009c3840 != DVar1) {
    LVar2 = InterlockedExchange((LONG *)&DAT_009c3848,1);
    if (LVar2 != 0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_009c384c);
    DAT_009c3840 = GetCurrentThreadId();
  }
  DAT_009c3844 = DAT_009c3844 + 1;
  iVar3 = 0;
  if (0 < DAT_009c3864) {
    do {
      if (((code *)(&DAT_009c3740)[iVar3 * 2] == (code *)0x0) || ((&DAT_009c3744)[iVar3 * 2] == 0))
      {
        (&DAT_009c3740)[iVar3 * 2] = *(undefined4 *)(&DAT_009c3738 + DAT_009c3864 * 8);
        (&DAT_009c3744)[iVar3 * 2] = *(undefined4 *)(&DAT_009c373c + DAT_009c3864 * 8);
        *(undefined4 *)(&DAT_009c3738 + DAT_009c3864 * 8) = 0;
        *(undefined4 *)(&DAT_009c373c + DAT_009c3864 * 8) = 0;
        DAT_009c3864 = DAT_009c3864 + -1;
        iVar3 = iVar3 + -1;
      }
      else {
        (*(code *)(&DAT_009c3740)[iVar3 * 2])((&DAT_009c3744)[iVar3 * 2]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_009c3864);
  }
  if (DAT_009c3844 < 2) {
    DAT_009c3840 = 0;
    DAT_009c3844 = 0;
    _DAT_009c3848 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_009c384c);
    return;
  }
  DAT_009c3844 = DAT_009c3844 - 1;
  return;
}

