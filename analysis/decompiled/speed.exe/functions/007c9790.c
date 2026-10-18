/* speed.exe 007c9790 _fopen; analysis pseudocode, not buildable source.
 * calls 007c9660 __fsopen
 */

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2003 Debug */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

