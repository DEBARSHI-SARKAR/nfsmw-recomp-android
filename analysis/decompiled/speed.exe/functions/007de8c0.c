/* speed.exe 007de8c0 __ld12tod; analysis pseudocode, not buildable source.
 * calls 007de680 __ld12cvt
 */

/* Library Function - Single Match
    __ld12tod
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt(_Ifp,_D,&DAT_00907264);
  return IVar1;
}

