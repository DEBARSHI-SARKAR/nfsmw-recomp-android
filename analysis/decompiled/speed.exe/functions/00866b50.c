/* speed.exe 00866b50 FUN_00866b50; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000114 Ordinal_20
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00866b50(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_14;
  undefined2 uStack_12;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_10 = *param_2;
  if (local_10 != 0) {
    local_c = 0;
    local_8 = 0;
    _local_14 = CONCAT22((short)param_2[1],2);
    Ordinal_20(*param_1,param_3,param_4,0,&local_14,0x10);
  }
  return;
}

