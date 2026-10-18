/* speed.exe 007ec67e FUN_007ec67e; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009d SystemTimeToFileTime
 * calls EXTERNAL:0000004f CreateWaitableTimerA
 * calls EXTERNAL:00000050 GetSystemTime
 * calls 007f0df9 FUN_007f0df9
 * calls EXTERNAL:0000009b SetWaitableTimer
 * calls 007ec44f FUN_007ec44f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007ec67e(int param_1)

{
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if (DAT_009bb0c0 == 0) {
    FUN_007f0df9(&DAT_009bb10c,0x20);
    FUN_007f0df9(&DAT_009076c0,0x18);
    DAT_009bb134 = 0;
    DAT_009bb0c0 = 1;
  }
  DAT_009bb130 = 0;
  DAT_009076c0 = CreateWaitableTimerA((LPSECURITY_ATTRIBUTES)0x0,1,(LPCSTR)0x0);
  DAT_009076d0 = (uint)(10000000 / (longlong)param_1);
  DAT_009076d4 = (int)DAT_009076d0 >> 0x1f;
  FUN_007ec44f(0,&LAB_007ec601,0,0,0,2);
  GetSystemTime(&local_1c);
  SystemTimeToFileTime(&local_1c,&local_c);
  _DAT_009076c8 = DAT_009076d0 + local_c.dwLowDateTime;
  _DAT_009076cc =
       DAT_009076d4 + local_c.dwHighDateTime + (uint)CARRY4(DAT_009076d0,local_c.dwLowDateTime);
  DAT_009bb12c = param_1;
  SetWaitableTimer(DAT_009076c0,(LARGE_INTEGER *)&DAT_009076c8,0,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0
                  );
  return DAT_009bb12c;
}

