/* speed.exe 0084c010 FUN_0084c010; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000003f CreateThread
 * calls EXTERNAL:00000080 InitializeCriticalSection
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:0000001d SetThreadPriority
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084c010(int param_1)

{
  DWORD local_4;
  
  DAT_009c3864 = 0;
  DAT_0090d3e0 = 0xffffffff;
  DAT_009c3718 = 0;
  DAT_009c371c = 0;
  DAT_009c3720 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_009c3724);
  DAT_009c3840 = 0;
  DAT_009c3844 = 0;
  _DAT_009c3848 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_009c384c);
  DAT_009c3868 = (HANDLE)0x1;
  DAT_009c3868 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0084bfd0,
                              (LPVOID)0x0,0,&local_4);
  if (DAT_009c3868 != (HANDLE)0x0) {
    SetThreadPriority(DAT_009c3868,param_1);
    CloseHandle(DAT_009c3868);
  }
  return;
}

