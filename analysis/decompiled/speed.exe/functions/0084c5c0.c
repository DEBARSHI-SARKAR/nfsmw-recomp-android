/* speed.exe 0084c5c0 FUN_0084c5c0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b110 FUN_0084b110
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0084c5c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_c;
  
  local_c = DAT_00906980;
  puVar2 = &local_190;
  for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_190._0_1_ = 0x67;
  local_190._1_1_ = 0x45;
  local_190._2_1_ = 0x41;
  local_188 = 0x3f;
  FUN_0084b110(*(undefined4 *)(param_2 + 0x38),&local_190,0x180,0,param_2 + 0x3c,0x10);
  return;
}

