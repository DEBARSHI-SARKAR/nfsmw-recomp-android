/* speed.exe 007cdc40 __cftoe; analysis pseudocode, not buildable source.
 * calls 007deaa0 __fptostr
 * calls 007d6cb0 __security_check_cookie
 * calls 007deba0 __fltout2
 * calls 007cdcd0 __cftoe2
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2003 Debug */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  STRFLT in_stack_ffffffc8;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  __fltout2((_CRT_DOUBLE)*_Value,(STRFLT)&stack0xffffffc8,local_20,(size_t)in_stack_ffffffc8);
  __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(in_stack_ffffffc8 == (STRFLT)0x2d),
            _SizeInBytes + 1,(int)&stack0xffffffc8,in_stack_ffffffc8);
  __cftoe2(_Buf,_SizeInBytes,_Dec,&stack0xffffffc8,0);
  return (errno_t)_Buf;
}

