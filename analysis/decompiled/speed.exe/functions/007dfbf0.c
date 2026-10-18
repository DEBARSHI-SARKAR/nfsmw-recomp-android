/* speed.exe 007dfbf0 _strftime; analysis pseudocode, not buildable source.
 * calls 007dfc10 __Strftime
 */

/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = __Strftime(_Buf,_SizeInBytes,_Format,_Tm,(void *)0x0);
  return sVar1;
}

