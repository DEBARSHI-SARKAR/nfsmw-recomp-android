/* speed.exe 007c4240 __amsg_exit; analysis pseudocode, not buildable source.
 * calls 007ca340 __exit
 * calls 007cd6f0 __FF_MSGBANNER
 * calls 007cd740 __NMSG_WRITE
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_009ba9ec != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_0090622c)(0xff);
  return;
}

