/* speed.exe 007dea00 __atoldbl; analysis pseudocode, not buildable source.
 * calls 007e4e00 ___strgtold12
 * calls 007d6cb0 __security_check_cookie
 * calls 007de900 __ld12told
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __atoldbl
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __atoldbl(_LDOUBLE *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  _LDBL12 local_18;
  undefined4 local_c;
  char *local_8;
  
  local_c = DAT_00906980;
  ___strgtold12(&local_18,&local_8,_Str,1,0,0,0);
  IVar1 = __ld12told(&local_18,_Result);
  return IVar1;
}

