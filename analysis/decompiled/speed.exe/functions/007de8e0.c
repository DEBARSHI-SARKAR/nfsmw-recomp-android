/* speed.exe 007de8e0 __ld12tof; analysis pseudocode, not buildable source.
 * calls 007de680 __ld12cvt
 */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt(_Ifp,_F,&DAT_0090727c);
  return IVar1;
}

