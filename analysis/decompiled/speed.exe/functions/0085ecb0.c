/* speed.exe 0085ecb0 _mktime; analysis pseudocode, not buildable source.
 * calls 0085ecf0 __make_time_t
 */

/* Library Function - Single Match
    _mktime
   
   Library: Visual Studio 2003 Debug */

time_t __cdecl _mktime(tm *_Tm)

{
  time_t tVar1;
  
  tVar1 = __make_time_t(_Tm,1);
  return tVar1;
}

