/* speed.exe 007cd6f0 __FF_MSGBANNER; analysis pseudocode, not buildable source.
 * calls 007cd740 __NMSG_WRITE
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_009ba9ec == 1) || ((DAT_009ba9ec == 0 && (DAT_00906230 == 1)))) {
    __NMSG_WRITE(0xfc);
    if (DAT_009bac14 != (code *)0x0) {
      (*DAT_009bac14)();
    }
    __NMSG_WRITE(0xff);
  }
  return;
}

