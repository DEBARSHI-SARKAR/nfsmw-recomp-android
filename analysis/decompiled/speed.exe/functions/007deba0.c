/* speed.exe 007deba0 __fltout2; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007dec30 ___dtold
 * calls 007e5ea0 $I10_OUTPUT
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fltout2
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  short local_24;
  char local_22;
  undefined1 local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  ___dtold(&local_30,&_Dbl);
  iVar1 = _I10_OUTPUT(local_30,local_2c,local_28,0x11,0,&local_24);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_22;
  _Flt->decpt = (int)local_24;
  FUN_007d0bd0(_ResultStr,local_20);
  _Flt->mantissa = _ResultStr;
  return _Flt;
}

