/* speed.exe 007c6380 _atoi; analysis pseudocode, not buildable source.
 * calls 007c6270 _atol
 */

/* Library Function - Single Match
    _atoi
   
   Library: Visual Studio 2003 Debug */

int __cdecl _atoi(char *_Str)

{
  long lVar1;
  
  lVar1 = _atol(_Str);
  return lVar1;
}

