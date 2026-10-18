/* speed.exe 00858c30 FUN_00858c30; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0085b1d0 FUN_0085b1d0
 * calls 0085b290 FUN_0085b290
 * calls 0085b190 FUN_0085b190
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00858c30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_0085b190(local_60);
  FUN_0085b1d0(local_60,param_1,param_2);
  FUN_0085b290(local_60,param_3,0x14);
  return;
}

