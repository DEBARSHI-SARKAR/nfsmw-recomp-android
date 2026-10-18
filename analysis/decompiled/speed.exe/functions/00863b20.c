/* speed.exe 00863b20 FUN_00863b20; analysis pseudocode, not buildable source.
 * calls 0083faf0 FUN_0083faf0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 * calls 00863a40 FUN_00863a40
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00863b20(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar1 = FUN_0083faf0(*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
  _sprintf(local_104,"/getPeerAddress?myIP=%s&myPort=%d&version=1.0",uVar1);
  FUN_00863a40(unaff_ESI + 0xe0,*(undefined4 *)(unaff_ESI + 0xd8),unaff_ESI + 0x18);
  *(undefined4 *)(unaff_ESI + 0x238) = 1;
  return;
}

