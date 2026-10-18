/* speed.exe 0084e090 FUN_0084e090; analysis pseudocode, not buildable source.
 * calls 0084b350 FUN_0084b350
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084e090(void)

{
  int unaff_ESI;
  undefined1 local_14 [2];
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_0084b350(*(undefined4 *)(unaff_ESI + 0x80),0x70656572,local_14,0x10);
  *(uint *)(unaff_ESI + 0x74) = CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d);
  *(ushort *)(unaff_ESI + 0x78) = CONCAT11(local_12,local_11);
  FUN_0084b350(*(undefined4 *)(unaff_ESI + 0x80),0x62696e64,local_14,0x10);
  *(uint *)(unaff_ESI + 0x70) = CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d);
  *(ushort *)(unaff_ESI + 0x78) = CONCAT11(local_12,local_11);
  return;
}

