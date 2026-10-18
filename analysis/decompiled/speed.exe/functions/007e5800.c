/* speed.exe 007e5800 ___STRINGTOLD; analysis pseudocode, not buildable source.
 * calls 007e4e00 ___strgtold12
 * calls 007d6cb0 __security_check_cookie
 * calls 007de900 __ld12told
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___STRINGTOLD
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

uint __cdecl ___STRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  INTRNCVT_STATUS IVar1;
  uint local_1c;
  _LDBL12 local_18;
  undefined4 local_c;
  
  local_c = DAT_00906980;
  local_1c = ___strgtold12(&local_18,p_end_ptr,str,mult12,0,0,0);
  IVar1 = __ld12told(&local_18,pld);
  if (IVar1 == INTRNCVT_OVERFLOW) {
    local_1c = local_1c | 2;
  }
  return local_1c;
}

