/* speed.exe 00863160 FUN_00863160; analysis pseudocode, not buildable source.
 * calls 0084b770 FUN_0084b770
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00863160(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0x4f000002;
  local_20 = 0x101a8c0;
  local_8 = 0;
  FUN_0084b770(&local_14,0x10,&local_24,0x10);
  return (((local_10 & 0xff) << 8 | local_10 >> 8 & 0xff) << 8 | local_10 >> 0x10 & 0xff) << 8 |
         local_10 >> 0x18;
}

