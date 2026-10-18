/* speed.exe 007cd9a0 __setdefaultprecision; analysis pseudocode, not buildable source.
 * calls 007cbbd0 __controlfp
 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Debug */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}

