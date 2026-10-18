/* speed.exe 0084fbf0 FUN_0084fbf0; analysis pseudocode, not buildable source.
 * calls 0084bb00 FUN_0084bb00
 * calls 0084b350 FUN_0084b350
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084fbf0(int param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  undefined1 local_14 [2];
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  *(uint *)(unaff_ESI + 0x74) =
       CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                         *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  *(ushort *)(unaff_ESI + 0x7a) =
       CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  FUN_0084b350(*(undefined4 *)(unaff_ESI + 0x80),0x62696e64,local_14,0x10);
  uVar1 = FUN_0084bb00();
  *(undefined4 *)(unaff_ESI + 0x70) = uVar1;
  *(ushort *)(unaff_ESI + 0x78) = CONCAT11(local_12,local_11);
  return;
}

