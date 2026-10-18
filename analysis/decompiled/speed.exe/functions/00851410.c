/* speed.exe 00851410 FUN_00851410; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084ae70 FUN_0084ae70
 * calls 00850ec0 FUN_00850ec0
 * calls 0084fc80 FUN_0084fc80
 * calls 0083fbb0 FUN_0083fbb0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00851410(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_14 = 2;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar1 = FUN_0083fbb0(&local_1c,&local_20,&local_18,param_2);
  if ((uVar1 & 2) == 0) {
    return -3;
  }
  local_12 = CONCAT11((char)local_20,(char)((uint)local_20 >> 8));
  iVar2 = FUN_0084ae70(2,2,0);
  if (iVar2 == 0) {
    return -4;
  }
  iVar2 = FUN_00850ec0(&local_14);
  FUN_0084fc80(param_1);
  if ((iVar2 == 0) && (local_1c != 0)) {
    if (local_18 == 0) {
      local_18 = local_20 + 1;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(char *)(param_1 + 0x8b) = (char)local_1c;
    *(char *)(param_1 + 0x8a) = (char)((uint)local_1c >> 8);
    *(char *)(param_1 + 0x89) = (char)((uint)local_1c >> 0x10);
    *(char *)(param_1 + 0x88) = (char)((uint)local_1c >> 0x18);
    *(undefined2 *)(param_1 + 0x86) = 0;
    *(undefined2 *)(param_1 + 0x84) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(char *)(param_1 + 0x86) = (char)((uint)local_18 >> 8);
    *(char *)(param_1 + 0x87) = (char)local_18;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return iVar2;
}

