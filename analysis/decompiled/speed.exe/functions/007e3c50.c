/* speed.exe 007e3c50 ___security_init_cookie; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000005b GetSystemTimeAsFileTime
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls EXTERNAL:00000090 GetCurrentProcessId
 * calls EXTERNAL:00000011 GetTickCount
 */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_20;
  LARGE_INTEGER local_1c;
  uint local_10;
  _FILETIME local_c;
  
  if ((DAT_00906980 == 0) || (DAT_00906980 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter(&local_1c);
    local_20 = local_10 ^ local_1c.s.LowPart ^ local_1c.s.HighPart;
    if (local_20 == 0) {
      local_20 = 0xbb40e64e;
    }
    DAT_00906980 = local_20;
  }
  return;
}

