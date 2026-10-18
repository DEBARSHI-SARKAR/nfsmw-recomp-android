/* speed.exe 0084e910 FUN_0084e910; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 007d6cb0 __security_check_cookie
 * calls 0084e160 FUN_0084e160
 * calls 0084ae70 FUN_0084ae70
 * calls 0084afb0 FUN_0084afb0
 * calls 0084b560 FUN_0084b560
 * calls 0084b080 FUN_0084b080
 * calls 0083fc90 FUN_0083fc90
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084e910(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if ((*(int *)(param_1 + 0x94) != 1) || (*(int *)(param_1 + 0x80) != 0)) {
    return 0xfffffffe;
  }
  local_14 = 2;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar1 = FUN_0083fc90(&local_14,param_2);
  if ((uVar1 & 2) == 0) {
    return 0xfffffffd;
  }
  FUN_0084e160();
  iVar2 = FUN_0084ae70(2,1,0);
  *(int *)(param_1 + 0x80) = iVar2;
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 == 0) {
    return 0xfffffffc;
  }
  iVar2 = FUN_0084afb0(iVar2,&local_14,0x10);
  if (iVar2 < 0) {
    FUN_0084af40(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0xfffffffb;
  }
  FUN_0084b080(*(undefined4 *)(param_1 + 0x80),5);
  FUN_0084b560(*(undefined4 *)(param_1 + 0x80),2,100,param_1,FUN_0084e570);
  *(undefined4 *)(param_1 + 0x94) = 3;
  return 0;
}

