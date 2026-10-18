/* speed.exe 0083faf0 FUN_0083faf0; analysis pseudocode, not buildable source.
 * calls 0083f910 FUN_0083f910
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_0083faf0(undefined4 param_1)

{
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_d = (undefined1)param_1;
  local_e = (undefined1)((uint)param_1 >> 8);
  local_f = (undefined1)((uint)param_1 >> 0x10);
  local_10 = (undefined1)((uint)param_1 >> 0x18);
  FUN_0083f910(local_14,&DAT_009c362c,0x14);
  return &DAT_009c362c;
}

