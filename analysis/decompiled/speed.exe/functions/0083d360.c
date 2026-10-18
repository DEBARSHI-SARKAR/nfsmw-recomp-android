/* speed.exe 0083d360 FUN_0083d360; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 007d6cb0 __security_check_cookie
 * calls 008406c0 FUN_008406c0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0083d360(void)

{
  undefined4 *unaff_ESI;
  undefined1 local_84 [128];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if ((unaff_ESI[10] == 3) || (unaff_ESI[10] == 4)) {
    local_84[0] = 0;
    FUN_0083c880(local_84,0x80,&DAT_008b6d40,&DAT_0089b6d8);
    FUN_008406c0(*unaff_ESI,0x6368616c,local_84,&LAB_0083d1c0);
  }
  return;
}

