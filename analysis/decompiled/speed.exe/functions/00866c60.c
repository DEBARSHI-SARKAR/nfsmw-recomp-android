/* speed.exe 00866c60 FUN_00866c60; analysis pseudocode, not buildable source.
 * calls 007c9b40 _vsprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000004c OutputDebugStringA
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00866c60(char *param_1)

{
  char local_1004 [4096];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  _vsprintf(local_1004,param_1,&stack0x00000008);
  OutputDebugStringA(local_1004);
  return 0;
}

