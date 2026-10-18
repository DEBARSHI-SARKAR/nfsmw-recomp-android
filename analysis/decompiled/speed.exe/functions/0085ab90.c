/* speed.exe 0085ab90 FUN_0085ab90; analysis pseudocode, not buildable source.
 * calls 00856dc0 FUN_00856dc0
 * calls 007d6cb0 __security_check_cookie
 * calls 00856d90 FUN_00856d90
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_0085ab90(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int local_70 [4];
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return 0;
  }
  if (param_3 < 8) {
    return 0xffffffff;
  }
  FUN_00856d90(local_60);
  FUN_00856dc0(local_60,param_2,param_3 + -8);
  FUN_00856e70(local_60,local_70,0x10);
  bVar4 = true;
  iVar1 = 2;
  piVar2 = (int *)(param_2 + -8 + param_3);
  piVar3 = local_70;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  return bVar4 - 1 & 0xfffffffe;
}

