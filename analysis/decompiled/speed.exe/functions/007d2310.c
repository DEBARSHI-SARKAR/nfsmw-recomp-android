/* speed.exe 007d2310 __CrtDbgBreak; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000002c DebugBreak
 */

/* Library Function - Single Match
    __CrtDbgBreak
   
   Library: Visual Studio 2003 Debug */

void __CrtDbgBreak(void)

{
  DebugBreak();
  return;
}

