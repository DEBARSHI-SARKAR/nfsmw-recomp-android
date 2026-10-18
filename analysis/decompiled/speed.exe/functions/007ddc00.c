/* speed.exe 007ddc00 ___initmbctable; analysis pseudocode, not buildable source.
 * calls 007dd2a0 __setmbcp
 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2003 Debug */

undefined4 ___initmbctable(void)

{
  if (DAT_009c5450 == 0) {
    __setmbcp(-3);
    DAT_009c5450 = 1;
  }
  return 0;
}

