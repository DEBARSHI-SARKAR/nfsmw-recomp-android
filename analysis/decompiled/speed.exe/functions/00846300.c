/* speed.exe 00846300 FUN_00846300; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 0083b4d0 FUN_0083b4d0
 * calls 007d6cb0 __security_check_cookie
 * calls 00852430 GetTickCount
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00846300(int param_1)

{
  uint uVar1;
  uint local_2c [4];
  undefined1 local_1c;
  char local_18 [20];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_1c = 0;
  if ((((char *)(param_1 + 0xa8) != (char *)0x0) && (*(char *)(param_1 + 0xa8) != '\0')) &&
     (*(char *)(param_1 + 0xb7) != '\0')) {
    _sprintf(local_18,"$%c%c%c%c",(int)*(char *)(param_1 + 0xb4),(int)*(char *)(param_1 + 0xb5),
             (int)*(char *)(param_1 + 0xb6),(int)*(char *)(param_1 + 0xb7));
    FUN_0083b4d0(local_18,local_2c,0x11);
    return local_2c[0] & 0xffff;
  }
  uVar1 = GetTickCount();
  return uVar1;
}

