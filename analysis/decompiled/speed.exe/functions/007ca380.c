/* speed.exe 007ca380 __c_exit; analysis pseudocode, not buildable source.
 * calls 007ca3a0 doexit
 */

/* Library Function - Single Match
    __c_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __c_exit(void)

{
  doexit(0,1,1);
  return;
}

