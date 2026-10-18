/* speed.exe 0084f780 FUN_0084f780; analysis pseudocode, not buildable source.
 * calls 0084ecc0 FUN_0084ecc0
 * calls 0084af40 FUN_0084af40
 * calls 007d6cb0 __security_check_cookie
 * calls 0084ae70 FUN_0084ae70
 * calls 0084afb0 FUN_0084afb0
 * calls 0084b560 FUN_0084b560
 * calls 0083fbb0 FUN_0083fbb0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084f780(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = DAT_00906980;
  if ((*(int *)(param_1 + 0x94) != 0) || (*(int *)(param_1 + 0x80) != 0)) {
    return 0xfffffffe;
  }
  local_14 = 2;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar2 = FUN_0083fbb0(&local_18,&param_1,&local_1c,param_2);
  if ((uVar2 & 2) == 0) {
    return 0xfffffffd;
  }
  local_12 = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
  FUN_0084ecc0();
  iVar3 = FUN_0084ae70(2,2,0);
  *(int *)(iVar1 + 0x80) = iVar3;
  *(int *)(iVar1 + 0x48) = iVar3;
  if (iVar3 == 0) {
    return 0xfffffffc;
  }
  iVar3 = FUN_0084afb0(iVar3,&local_14,0x10);
  if (iVar3 < 0) {
    FUN_0084af40(*(undefined4 *)(iVar1 + 0x80));
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    return 0xfffffffb;
  }
  FUN_0084b560(*(undefined4 *)(iVar1 + 0x80),2,100,iVar1,&LAB_0084f3c0);
  if (local_18 != 0) {
    if (local_1c == 0) {
      local_1c = param_1 + 1;
    }
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(char *)(iVar1 + 0x8b) = (char)local_18;
    *(char *)(iVar1 + 0x8a) = (char)((uint)local_18 >> 8);
    *(char *)(iVar1 + 0x89) = (char)((uint)local_18 >> 0x10);
    *(undefined2 *)(iVar1 + 0x86) = 0;
    *(undefined2 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(char *)(iVar1 + 0x88) = (char)((uint)local_18 >> 0x18);
    *(char *)(iVar1 + 0x86) = (char)((uint)local_1c >> 8);
    *(char *)(iVar1 + 0x87) = (char)local_1c;
  }
  *(undefined4 *)(iVar1 + 0x94) = 2;
  return 0;
}

