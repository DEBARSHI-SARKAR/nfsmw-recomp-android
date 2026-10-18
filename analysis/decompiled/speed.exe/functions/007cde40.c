/* speed.exe 007cde40 __cftof; analysis pseudocode, not buildable source.
 * calls 007deaa0 __fptostr
 * calls 007cdec0 __cftof2
 * calls 007d6cb0 __security_check_cookie
 * calls 007deba0 __fltout2
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 2003 Debug */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  STRFLT in_stack_ffffffc8;
  int local_34;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  __fltout2((_CRT_DOUBLE)*_Value,(STRFLT)&stack0xffffffc8,local_20,(size_t)in_stack_ffffffc8);
  __fptostr(_Buf + (in_stack_ffffffc8 == (STRFLT)0x2d),_SizeInBytes + local_34,(int)&stack0xffffffc8
            ,in_stack_ffffffc8);
  __cftof2(_Buf,_SizeInBytes,&stack0xffffffc8,0);
  return (errno_t)_Buf;
}

