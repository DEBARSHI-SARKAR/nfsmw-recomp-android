/* speed.exe 00839e00 FUN_00839e00; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 00839c40 FUN_00839c40
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6610 FUN_007c6610
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00839e00(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar1 = FUN_0083a670(param_2[5],&DAT_008b68c4,local_14,0x10,"Not Present");
  FUN_0083b210(uVar1);
  if (*param_2 == 0x63686174) {
    uVar1 = FUN_0083a670(param_2[5],"NOREPLY",0);
    iVar2 = FUN_0083abc0(uVar1);
    param_2[1] = 0x63686174;
    iVar3 = FUN_007c6610(param_2[5],"Congratulations, you are a recruit for a club");
    if (iVar3 == 0) {
      if (iVar2 != 0) {
        param_2[1] = 0x61646d6e;
      }
    }
    else {
      param_2[1] = 0x636c7562;
    }
    FUN_00839c40(param_3,local_14,param_2,iVar2);
  }
  return;
}

