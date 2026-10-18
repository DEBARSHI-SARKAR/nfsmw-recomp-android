/* speed.exe 007c9370 ___endstdio; analysis pseudocode, not buildable source.
 * calls 007d7070 __fcloseall
 * calls 007d7320 __flushall
 */

/* Library Function - Single Match
    ___endstdio
   
   Library: Visual Studio 2003 Debug */

void ___endstdio(void)

{
  __flushall();
  if (DAT_009baa58 != '\0') {
    __fcloseall();
  }
  return;
}

