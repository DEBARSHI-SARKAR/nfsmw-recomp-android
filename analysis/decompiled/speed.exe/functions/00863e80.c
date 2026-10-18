/* speed.exe 00863e80 FUN_00863e80; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 0083fb40 FUN_0083fb40
 * calls 00863c10 FUN_00863c10
 * calls 007c6380 _atoi
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_00863e80(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  char local_44 [64];
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = DAT_00906980;
  if (unaff_EDI == 0) {
    return false;
  }
  unaff_ESI[4] = 0xffffffff;
  unaff_ESI[5] = 0xffffffff;
  *unaff_ESI = 0;
  iVar1 = FUN_00863c10(local_44,1);
  unaff_ESI[5] = iVar1;
  if (-1 < iVar1) {
    iVar1 = FUN_0083fb40(local_44);
    unaff_ESI[2] = iVar1;
    if (iVar1 != 0) {
      iVar2 = 1;
    }
  }
  iVar1 = FUN_00863c10(local_44,1);
  if (iVar1 == unaff_ESI[5]) {
    iVar1 = _atoi(local_44);
    unaff_ESI[3] = iVar1;
    if (0 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  iVar1 = FUN_00863c10(local_44,1);
  if (iVar1 == unaff_ESI[5]) {
    _strncpy((char *)(unaff_ESI + 6),local_44,0x3f);
    *(undefined1 *)((int)unaff_ESI + 0x57) = 0;
    iVar2 = iVar2 + 1;
  }
  iVar1 = FUN_00863c10(local_44,1);
  if (iVar1 == unaff_ESI[5]) {
    iVar1 = _atoi(local_44);
    if ((1 < iVar1) && (iVar1 < 0x20)) {
      unaff_ESI[1] = iVar1;
      iVar2 = iVar2 + 1;
    }
  }
  iVar1 = FUN_00863c10(local_44,1);
  if (iVar1 == unaff_ESI[5]) {
    iVar1 = _atoi(local_44);
    if (0 < iVar1) {
      unaff_ESI[4] = iVar1;
    }
  }
  return iVar2 == 4;
}

