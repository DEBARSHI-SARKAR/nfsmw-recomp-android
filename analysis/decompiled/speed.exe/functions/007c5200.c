/* speed.exe 007c5200 __purecall; analysis pseudocode, not buildable source.
 * calls 007c4240 __amsg_exit
 */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2003 Debug */

void __purecall(void)

{
  if (DAT_009ba9f8 != (code *)0x0) {
    (*DAT_009ba9f8)();
  }
  __amsg_exit(0x19);
  return;
}

