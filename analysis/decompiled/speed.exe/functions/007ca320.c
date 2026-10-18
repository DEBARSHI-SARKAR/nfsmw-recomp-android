/* speed.exe 007ca320 _exit; analysis pseudocode, not buildable source.
 * calls 007ca3a0 doexit
 */

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}

