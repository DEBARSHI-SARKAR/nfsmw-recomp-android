/* speed.exe 00863a40 FUN_00863a40; analysis pseudocode, not buildable source.
 * calls 008638a0 FUN_008638a0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
FUN_00863a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  _sprintf(local_204,
           "GET %s HTTP/1.1\r\nCookie: sessionID=%s\r\nAccept: */*\r\nContent-Length: 0\r\nUser-Agent: Custom/1.0\r\nHost: %s\r\n\r\n"
           ,param_1,param_5,param_2);
  FUN_008638a0(param_2,param_4);
  return;
}

