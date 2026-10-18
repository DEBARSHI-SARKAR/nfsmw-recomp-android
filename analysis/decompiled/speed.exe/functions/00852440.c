/* speed.exe 00852440 FUN_00852440; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 0083fa50 FUN_0083fa50
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0085a9d0 FUN_0085a9d0
 * calls 0083fa70 FUN_0083fa70
 * calls 0085a990 FUN_0085a990
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00852440(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_58 [32];
  undefined1 local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*param_1 != 0) {
    return 0xffffffff;
  }
  if (param_1[0x1f] != 0) {
    thunk_FUN_004655f0(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 1) = 2;
  iVar2 = FUN_0083fa70(param_3);
  param_1[2] = iVar2;
  uVar1 = FUN_0083fa50(param_4);
  *(undefined2 *)((int)param_1 + 6) = uVar1;
  if (param_2 == (char *)0x0) {
    piVar3 = param_1 + 7;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
  }
  else {
    _strncpy((char *)(param_1 + 7),param_2,0x3f);
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  param_1[0x17] = 2;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  if (*(short *)((int)param_1 + 0x8e) != 0) {
    iVar2 = FUN_0085a990(param_1 + 0x24,local_58,local_38);
    if (0 < iVar2) {
      FUN_008521b0(param_1,0x3f746963,0,local_38,0x34);
      FUN_0085a9d0(param_1 + 0x39,local_58);
      return 0;
    }
    *(undefined2 *)((int)param_1 + 0x8e) = 0;
  }
  return 0;
}

