/* speed.exe 00842130 FUN_00842130; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a630 FUN_0083a630
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00842130(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char local_64 [32];
  char local_44;
  char local_43 [63];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  _sprintf(local_64,"BTN%d",param_3);
  uVar1 = FUN_0083a670(param_1 + 0x210,local_64,&local_44,0x40,&DAT_00890978);
  FUN_0083b210(uVar1);
  if (local_44 != '\0') {
    if (local_44 == '^') {
      pcVar2 = local_43;
      *param_2 = 0x5e;
    }
    else {
      pcVar2 = &local_44;
      *param_2 = 0x20;
    }
    FUN_0083a630(param_2 + 1,0x28,pcVar2);
  }
  return;
}

