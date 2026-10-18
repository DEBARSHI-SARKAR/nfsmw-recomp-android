/* speed.exe 007de9b0 FID_conflict:__atodbl; analysis pseudocode, not buildable source.
 * calls 007de8c0 __ld12tod
 * calls 007e4e00 ___strgtold12
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  _LDBL12 local_18;
  undefined4 local_c;
  char *local_8;
  
  local_c = DAT_00906980;
  ___strgtold12(&local_18,&local_8,_Str,0,0,0,0);
  IVar1 = __ld12tod(&local_18,(_CRT_DOUBLE *)_Result);
  return IVar1;
}

