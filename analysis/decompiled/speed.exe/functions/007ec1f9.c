/* speed.exe 007ec1f9 FUN_007ec1f9; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000097 DuplicateHandle
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:00000003 GetCurrentProcess
 * calls EXTERNAL:00000069 GetCurrentThreadId
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ec1f9(void)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  LPHANDLE lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL bInheritHandle;
  DWORD dwOptions;
  
  if (DAT_009baf6c == 0) {
    _DAT_009baf70 = GetCurrentThreadId();
    dwOptions = 2;
    bInheritHandle = 0;
    dwDesiredAccess = 0;
    lpTargetHandle = (LPHANDLE)&DAT_009baf74;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceHandle = GetCurrentThread();
    hSourceProcessHandle = GetCurrentProcess();
    DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                    dwDesiredAccess,bInheritHandle,dwOptions);
    DAT_009baf6c = 1;
  }
  return;
}

