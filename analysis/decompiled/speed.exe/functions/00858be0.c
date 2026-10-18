/* speed.exe 00858be0 FUN_00858be0; analysis pseudocode, not buildable source.
 * calls 00856dc0 FUN_00856dc0
 * calls 00856d90 FUN_00856d90
 * calls 007d6cb0 __security_check_cookie
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00858be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_00856d90(local_60);
  FUN_00856dc0(local_60,param_1,param_2);
  FUN_00856e70(local_60,param_3,0x10);
  return;
}

