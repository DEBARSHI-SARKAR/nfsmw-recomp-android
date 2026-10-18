/* speed.exe 0083a850 FUN_0083a850; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0083a850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  _sprintf(local_104,"%s%d",param_2,param_3);
  FUN_0083a670(param_1,local_104);
  return;
}

