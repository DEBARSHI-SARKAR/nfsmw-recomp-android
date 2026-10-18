/* speed.exe 0085ac90 FUN_0085ac90; analysis pseudocode, not buildable source.
 * calls 00856dc0 FUN_00856dc0
 * calls 007d6cb0 __security_check_cookie
 * calls 00856d90 FUN_00856d90
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0085ac90(int *param_1,int param_2,int param_3)

{
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  param_3 = param_3 + -8;
  if (*param_1 != 0) {
    if (param_3 < 0) {
      return 0xffffffff;
    }
    FUN_00856d90(local_60);
    FUN_00856dc0(local_60,param_2,param_3);
    FUN_00856e70(local_60,param_3 + param_2,8);
  }
  return 0;
}

