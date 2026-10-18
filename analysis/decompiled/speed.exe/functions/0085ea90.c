/* speed.exe 0085ea90 _strtoul; analysis pseudocode, not buildable source.
 * calls 0085e790 strtoxl
 */

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2003 Debug */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}

