/* speed.exe 0083fb40 FUN_0083fb40; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083f890 FUN_0083f890
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0083fb40(undefined4 param_1)

{
  int iVar1;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar1 = FUN_0083f890(local_14,param_1);
  if (iVar1 == 0) {
    return CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d);
  }
  return 0;
}

