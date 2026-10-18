/* speed.exe 0083bf00 FUN_0083bf00; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a330 FUN_0083a330
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0083bf00(int param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  float10 extraout_ST0;
  char local_27 [35];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  pcVar5 = local_27 + 3;
  uVar2 = FUN_007c4b80();
  if (uVar2 != 0) {
    do {
      uVar1 = (ulonglong)uVar2;
      uVar2 = uVar2 / 10;
      pcVar5 = pcVar5 + -1;
      *pcVar5 = (char)(uVar1 % 10) + '0';
    } while (uVar2 != 0);
    if (pcVar5 != local_27 + 3) goto LAB_0083bf5f;
  }
  pcVar5 = pcVar5 + -1;
  *pcVar5 = '0';
LAB_0083bf5f:
  if (extraout_ST0 < (float10)_DAT_00890968) {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = '-';
  }
  local_27[3] = 0x2e;
  pcVar6 = local_27 + 4;
  uVar2 = FUN_007c4b80();
  uVar2 = uVar2 % 10000;
  do {
    *pcVar6 = (char)(((ulonglong)uVar2 / 1000) % 10) + '0';
    uVar2 = (uVar2 * 10) % 10000;
    pcVar6 = pcVar6 + 1;
  } while (uVar2 != 0);
  uVar2 = (int)pcVar6 - (int)pcVar5;
  pcVar3 = (char *)FUN_0083a330(param_1,param_2,param_3,uVar2);
  if (pcVar3 == (char *)0x0) {
    return -1;
  }
  pcVar7 = pcVar5;
  pcVar8 = pcVar3;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar6 = pcVar6 + ((int)pcVar3 - (int)pcVar5);
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pcVar6 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar6 = pcVar6 + 1;
  }
  *pcVar6 = '\0';
  return (int)pcVar6 - param_1;
}

