/* speed.exe 007d1030 __lockerr_exit; analysis pseudocode, not buildable source.
 * calls 007ca4d0 ___crtExitProcess
 * calls EXTERNAL:0000002b FatalAppExitA
 */

/* Library Function - Single Match
    __lockerr_exit
   
   Library: Visual Studio 2003 Debug */

void __lockerr_exit(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
  ___crtExitProcess(0xff);
  return;
}

