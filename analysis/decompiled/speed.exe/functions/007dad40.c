/* speed.exe 007dad40 __fltin2; analysis pseudocode, not buildable source.
 * calls 007de8c0 __ld12tod
 * calls 007e4e00 ___strgtold12
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2003 Debug */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  uint local_2c;
  _LDBL12 local_28;
  undefined4 local_1c;
  char *local_18;
  _CRT_DOUBLE local_14;
  uint local_8;
  
  local_1c = DAT_00906980;
  local_2c = 0;
  local_8 = ___strgtold12(&local_28,&local_18,_Str,0,0,0,0);
  if ((local_8 & 4) == 0) {
    IVar1 = __ld12tod(&local_28,&local_14);
    if (((local_8 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      local_2c = 0x80;
    }
    if (((local_8 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      local_2c = local_2c | 0x100;
    }
  }
  else {
    local_2c = 0x200;
    local_14.x._0_4_ = 0;
    local_14.x._4_4_ = 0;
  }
  _Flt->flags = local_2c;
  _Flt->nbytes = (int)local_18 - (int)_Str;
  *(undefined4 *)&_Flt->dval = local_14.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_14.x._4_4_;
  return _Flt;
}

