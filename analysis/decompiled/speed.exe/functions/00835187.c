/* speed.exe 00835187 FUN_00835187; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000003 GetCurrentProcess
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls 00835120 FUN_00835120
 * calls EXTERNAL:0000006c TlsGetValue
 * calls EXTERNAL:00000097 DuplicateHandle
 */

LPVOID FUN_00835187(void)

{
  HANDLE hSourceHandle;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  LPVOID *lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL BVar1;
  DWORD dwOptions;
  LPVOID local_8;
  
  if ((DAT_0090d2c8 == 0xffffffff) || (local_8 = TlsGetValue(DAT_0090d2c8), local_8 == (LPVOID)0x0))
  {
    hSourceHandle = GetCurrentThread();
    dwOptions = 2;
    BVar1 = 1;
    dwDesiredAccess = 0;
    lpTargetHandle = &local_8;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceProcessHandle = GetCurrentProcess();
    BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                            dwDesiredAccess,BVar1,dwOptions);
    if (BVar1 != 0) {
      FUN_00835120(local_8,1);
    }
  }
  return local_8;
}

