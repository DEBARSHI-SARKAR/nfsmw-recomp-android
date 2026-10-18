/* speed.exe 0085e770 _strtol; analysis pseudocode, not buildable source.
 * calls 0085e790 strtoxl
 */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2003 Debug */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  long lVar1;
  
  lVar1 = strtoxl(_Str,_EndPtr,_Radix,0);
  return lVar1;
}

