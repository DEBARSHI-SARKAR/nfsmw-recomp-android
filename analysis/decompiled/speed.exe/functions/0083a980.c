/* speed.exe 0083a980 FUN_0083a980; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a330 FUN_0083a330
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083a980(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_7 [3];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  uVar5 = param_4;
  if ((int)param_4 < 10) {
    if (-1 < (int)param_4) {
      pcVar7 = (char *)FUN_0083a330(param_1,param_2,param_3,1);
      iVar4 = DAT_0090d314;
      if (pcVar7 == (char *)0x0) {
        return -1;
      }
      *pcVar7 = (char)param_4 + '0';
      pcVar6 = pcVar7 + 1;
      if ((iVar4 != 0) && (param_3 != 0)) {
        *pcVar6 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
        pcVar6 = pcVar7 + 2;
      }
      *pcVar6 = '\0';
      return (int)pcVar6 - param_1;
    }
    uVar5 = -param_4;
  }
  local_7[2] = 0;
  pcVar7 = local_7 + 2;
  do {
    pcVar6 = pcVar7;
    uVar3 = (ulonglong)uVar5;
    uVar5 = uVar5 / 10;
    pcVar7 = pcVar6 + -1;
    *pcVar7 = (char)(uVar3 % 10) + '0';
  } while (uVar5 != 0);
  if ((int)param_4 < 0) {
    pcVar7 = pcVar6 + -2;
    *pcVar7 = '-';
  }
  pcVar6 = (char *)FUN_0083a330(param_1,param_2,param_3,local_7 + (2 - (int)pcVar7));
  if (pcVar6 == (char *)0x0) {
    return -1;
  }
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    *pcVar6 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pcVar6 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = '\0';
  return (int)pcVar6 - param_1;
}

