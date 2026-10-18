/* speed.exe 007ca520 __lockexit; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 */

/* Library Function - Single Match
    __lockexit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __lockexit(void)

{
  __lock(8);
  return;
}

