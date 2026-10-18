/* speed.exe 007c4270 fast_error_exit; analysis pseudocode, not buildable source.
 * calls 007cd6f0 __FF_MSGBANNER
 * calls 007ca4d0 ___crtExitProcess
 * calls 007cd740 __NMSG_WRITE
 */

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_009ba9ec != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}

