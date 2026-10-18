/* speed.exe 0084ed50 FUN_0084ed50; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b110 FUN_0084b110
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084ed50(undefined1 param_1)

{
  int iVar1;
  DWORD DVar2;
  int unaff_ESI;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_8[0] = param_1;
  iVar1 = FUN_0084b110(*(undefined4 *)(unaff_ESI + 0x80),local_8,1,0,unaff_ESI + 0x84,0x10);
  if (iVar1 == 1) {
    DVar2 = GetTickCount();
    *(DWORD *)(unaff_ESI + 200) = DVar2;
    *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + 1;
    *(int *)(unaff_ESI + 100) = *(int *)(unaff_ESI + 100) + 1;
  }
  return;
}

