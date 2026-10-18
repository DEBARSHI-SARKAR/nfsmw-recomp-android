/* speed.exe 00842690 FUN_00842690; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 008425b0 FUN_008425b0
 * calls 00842380 FUN_00842380
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00842690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar2 = param_1 + 0x210;
  uVar1 = FUN_0083a670(iVar2,param_4,local_404,0x400,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,param_3,local_404,0x400,local_404);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,param_2,local_404,0x400,local_404);
  FUN_0083b210(uVar1);
  iVar2 = FUN_007c97c0(local_404,0x3b);
  if (iVar2 != 0) {
    FUN_008425b0(param_1,local_404);
    return;
  }
  FUN_00842380(param_1,local_404);
  return;
}

