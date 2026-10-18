/* speed.exe 00837d10 FUN_00837d10; analysis pseudocode, not buildable source.
 * calls 00847f80 FUN_00847f80
 * calls 007d6cb0 __security_check_cookie
 * calls 008367a0 FUN_008367a0
 * calls 007c64e0 _strncpy
 * calls 00837690 FUN_00837690
 * calls 00836a90 FUN_00836a90
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00837d10(int param_1,char *param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_158 [2];
  undefined4 local_150;
  undefined4 local_144;
  char local_140 [16];
  char local_130 [248];
  uint local_38;
  undefined4 local_c;
  
  local_c = DAT_00906980;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xc) == 5) {
    return -0x6e;
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    pcVar4 = local_130;
    for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    _strncpy(local_130,param_2,0x21);
    local_38 = param_3;
    piVar1 = (int *)FUN_00837690(param_1,param_2);
    if ((piVar1 != (int *)0x0) && ((*(uint *)(*piVar1 + 0xf8) & local_38) != 0)) {
      if (*(int *)(param_1 + 0x10) == -1) {
        return -1;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x2c) = param_4;
        *(undefined4 *)(param_1 + 0x28) = param_5;
      }
      _strncpy(local_140,(char *)*piVar1,0x10);
      if (param_3 == 0x100000) {
        local_38 = local_38 | 0x800000;
      }
      iVar3 = FUN_00847f80(*(undefined4 *)(param_1 + 8),local_130,FUN_00836a90,param_1,
                           *(undefined4 *)(param_1 + 0xb0));
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (param_3 == 0x100000) {
          local_150 = 0;
          local_144 = 0;
          local_158[0] = 0x64656c75;
          FUN_00836a90(*(undefined4 *)(param_1 + 8),local_158,param_1);
        }
        FUN_008367a0(param_1);
      }
      else {
        *(int *)(param_1 + 0x10) = iVar3;
      }
    }
    return iVar3;
  }
  return -4;
}

