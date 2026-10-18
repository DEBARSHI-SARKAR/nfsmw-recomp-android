/* speed.exe 00835054 FUN_00835054; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009a GetExitCodeThread
 * calls EXTERNAL:00000056 EnterCriticalSection
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000057 LeaveCriticalSection
 */

void __thiscall FUN_00835054(DWORD param_1,char param_2)

{
  HANDLE hThread;
  BOOL BVar1;
  uint uVar2;
  DWORD local_8;
  
  local_8 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  uVar2 = 0;
  do {
    hThread = *(HANDLE *)(param_1 + uVar2 * 4);
    if (hThread != (HANDLE)0x0) {
      local_8 = 0;
      if (param_2 == '\0') {
        BVar1 = GetExitCodeThread(hThread,&local_8);
        if ((BVar1 != 0) && (local_8 == 0x103)) goto LAB_0083509f;
      }
      CloseHandle(*(HANDLE *)(param_1 + uVar2 * 4));
      *(undefined4 *)(param_1 + uVar2 * 4) = 0;
    }
LAB_0083509f:
    uVar2 = uVar2 + 1;
    if (0xf < uVar2) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
      return;
    }
  } while( true );
}

