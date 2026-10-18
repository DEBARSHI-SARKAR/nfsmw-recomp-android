/* speed.exe 008541e0 FUN_008541e0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 00853180 FUN_00853180
 * calls 0083ad80 FUN_0083ad80
 * calls 0083abc0 FUN_0083abc0
 * calls 008450a0 FUN_008450a0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008541e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_28 [36];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar1 = FUN_0083a670(param_2,"LIDENT",0xffffffff);
  iVar2 = FUN_0083abc0(uVar1);
  if (-1 < iVar2) {
    uVar1 = FUN_0083a670(param_2,"LGCOUNT",0xffffffff);
    uVar1 = FUN_0083abc0(uVar1);
    uVar1 = FUN_0083a670(param_2,"LCOUNT",0,uVar1);
    uVar1 = FUN_0083abc0(uVar1);
    FUN_008450a0(param_1,iVar2,uVar1);
  }
  uVar1 = FUN_0083a670(param_2,"IDENT",0);
  iVar2 = FUN_0083abc0(uVar1);
  uVar1 = FUN_0083a670(param_2,"COUNT",0);
  FUN_0083abc0(uVar1);
  uVar1 = FUN_0083a670(param_2,"GCOUNT",0xffffffff);
  FUN_0083abc0(uVar1);
  if (iVar2 != *(int *)(param_1 + 0x17e4)) {
    uVar1 = FUN_0083a670(param_2,&DAT_008b4cbc,local_28,0x24,&DAT_00890978);
    FUN_0083b210(uVar1);
    uVar1 = FUN_0083a670(param_2,"FLAGS",0);
    uVar1 = FUN_0083ad80(uVar1);
    FUN_00853180(local_28,uVar1);
  }
  return;
}

