/* speed.exe 00839610 FUN_00839610; analysis pseudocode, not buildable source.
 * calls 00847e10 FUN_00847e10
 * calls 007d6cb0 __security_check_cookie
 * calls 00837bf0 FUN_00837bf0
 * calls 00837cc0 FUN_00837cc0
 * calls 007c64e0 _strncpy
 * calls 00848200 FUN_00848200
 * calls 00838160 FUN_00838160
 * calls 00847b60 FUN_00847b60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00839610(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char local_130 [292];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  if (*(int *)(param_1 + 0xc) == 5) {
    return -0x6e;
  }
  iVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    iVar3 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x100), piVar1 != (int *)0x0)) {
      uVar2 = *(uint *)(*piVar1 + 0xf8);
      if ((uVar2 & 0x2000000) != 0) {
        return -2;
      }
      iVar3 = FUN_00838160(piVar1);
      if ((iVar3 == 0) && ((uVar2 & 0x200) == 0)) goto LAB_008396e7;
    }
  }
  iVar3 = FUN_00837bf0(param_1,0xc0004);
  if (*(int *)(param_1 + 0x90) <= iVar3) {
    return -5;
  }
LAB_008396e7:
  pcVar4 = local_130;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  FUN_00837cc0(param_1,param_2,param_3,param_4);
  _strncpy(local_130,param_2,0x21);
  iVar3 = FUN_00847e10(*(undefined4 *)(param_1 + 8),local_130,FUN_00836a90,param_1,
                       *(undefined4 *)(param_1 + 0xb0));
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return iVar3;
}

