/* speed.exe 0085ecd0 __mkgmtime; analysis pseudocode, not buildable source.
 * calls 0085ecf0 __make_time_t
 */

/* Library Function - Single Match
    __mkgmtime
   
   Library: Visual Studio 2003 Debug */

time_t __cdecl __mkgmtime(tm *_Tm)

{
  time_t tVar1;
  
  tVar1 = __make_time_t(_Tm,0);
  return tVar1;
}

