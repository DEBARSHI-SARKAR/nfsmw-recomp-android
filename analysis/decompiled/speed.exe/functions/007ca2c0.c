/* speed.exe 007ca2c0 __cinit; analysis pseudocode, not buildable source.
 * calls 007ca570 __initterm_e
 * calls 007c5df0 _atexit
 * calls 007ca540 __initterm
 * calls 007c4360 __fpmath
 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2003 Debug */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (PTR___fpmath_0090623c != (undefined *)0x0) {
    (*(code *)PTR___fpmath_0090623c)(param_1);
  }
  iVar1 = __initterm_e(&DAT_008eb168,&DAT_008eb180);
  if (iVar1 == 0) {
    _atexit(__RTC_Terminate);
    __initterm(&DAT_008ea000,&DAT_008eb164);
    iVar1 = 0;
  }
  return iVar1;
}

