/* speed.exe 00860d00 _putwc; analysis pseudocode, not buildable source.
 * calls 00860ac0 _fputwc
 */

/* Library Function - Single Match
    _putwc
   
   Library: Visual Studio 2003 Debug */

wint_t __cdecl _putwc(wchar_t _Ch,FILE *_File)

{
  wint_t wVar1;
  
  wVar1 = _fputwc(_Ch,_File);
  return wVar1;
}

