/* speed.exe 007df2b0 __ultoa; analysis pseudocode, not buildable source.
 * calls 007df1a0 xtoa
 */

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}

