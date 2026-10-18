/* speed.exe 0085ec60 FID_conflict:__time32; analysis pseudocode, not buildable source.
 * calls 007dcb40 __aulldiv
 * calls EXTERNAL:0000005b GetSystemTimeAsFileTime
 */

/* Library Function - Multiple Matches With Different Base Names
    __time32
    _time
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

__time32_t __cdecl FID_conflict___time32(__time32_t *_Time)

{
  __time32_t _Var1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  _Var1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    (local_c.dwHighDateTime + 0xfe624e22) -
                    (uint)(local_c.dwLowDateTime < 0xd53e8000),&DAT_00989680,0);
  if (_Time != (__time32_t *)0x0) {
    *_Time = _Var1;
  }
  return _Var1;
}

