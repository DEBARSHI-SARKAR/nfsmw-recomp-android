/* speed.exe 007c4360 __fpmath; analysis pseudocode, not buildable source.
 * calls 007cda10 __ms_p5_mp_test_fdiv
 * calls 007c43a0 __cfltcvt_init
 * calls 007cd9a0 __setdefaultprecision
 */

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  DAT_009ba9f4 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}

