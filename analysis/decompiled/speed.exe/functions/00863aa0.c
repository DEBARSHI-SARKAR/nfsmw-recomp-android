/* speed.exe 00863aa0 FUN_00863aa0; analysis pseudocode, not buildable source.
 * calls 008638a0 FUN_008638a0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall
FUN_00863aa0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  char local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _sprintf(local_204,
           "POST %s HTTP/1.1\r\nCookie: sessionID=%s\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: %d\r\nHost: %s\r\n\r\n%s\r\n"
           ,param_5,param_6,(int)pcVar2 - (int)(param_1 + 1),param_2,param_1);
  FUN_008638a0(param_2,param_4);
  return;
}

