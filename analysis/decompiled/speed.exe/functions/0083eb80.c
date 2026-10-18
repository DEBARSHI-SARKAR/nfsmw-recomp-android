/* speed.exe 0083eb80 FUN_0083eb80; analysis pseudocode, not buildable source.
 * calls 0084caf0 FUN_0084caf0
 * calls 007c6100 _sprintf
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6610 FUN_007c6610
 * calls 0084d1b0 FUN_0084d1b0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0083eb80(int *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_1[0x29] == 0) {
    iVar2 = FUN_0084d1b0(0x10);
    param_1[0x29] = iVar2;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    _sprintf(local_104,"Default Name");
    puVar3 = (undefined *)*param_1;
    if ((undefined *)*param_1 == (undefined *)0x0) {
      puVar3 = PTR_s_00_e0_98_8f_f8_e4_Greg_s_PC_00_e_0090d330;
    }
    iVar2 = FUN_007c6610(puVar3,local_104);
    if (iVar2 != 0) {
      iVar2 = FUN_007c97c0(iVar2,0x3a);
      cVar1 = *(char *)(iVar2 + 1);
      pcVar4 = local_104;
      if ('\x1f' < cVar1) {
        do {
          *pcVar4 = cVar1;
          cVar1 = pcVar4[(int)((char *)(iVar2 + 1) + (1 - (int)local_104))];
          pcVar4 = pcVar4 + 1;
        } while ('\x1f' < cVar1);
      }
      *pcVar4 = '\0';
    }
    param_3 = local_104;
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)param_1 + (4 - (int)param_2)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_0084caf0(param_1[0x29],param_2,param_3,param_4,"TCP:~1:1024\tUDP:~1:1024",param_1[0x35]);
  return;
}

