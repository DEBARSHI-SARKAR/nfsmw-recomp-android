/* speed.exe 007ca4d0 ___crtExitProcess; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls EXTERNAL:0000000d GetProcAddress
 * calls EXTERNAL:00000059 ExitProcess
 */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___crtExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

