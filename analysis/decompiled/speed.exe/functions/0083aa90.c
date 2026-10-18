/* speed.exe 0083aa90 FUN_0083aa90; analysis pseudocode, not buildable source.
 * calls 007c66a0 __allshr
 * calls 0083a980 FUN_0083a980
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a330 FUN_0083a330
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0083ab2d) */

int FUN_0083aa90(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char local_6 [2];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if ((-2 < (int)param_5) &&
     ((((param_5 < 0x80000000 || (0xffffd8f0 < param_4)) && ((int)param_5 < 1)) &&
      (((int)param_5 < 0 || (param_4 < 10000)))))) {
    iVar3 = FUN_0083a980(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  bVar7 = (int)param_5 < 0;
  pcVar4 = local_6 + 1;
  local_6[1] = 0;
  bVar6 = false;
  if ((int)param_5 < 1) {
    if (bVar7) {
      bVar6 = param_4 != 0;
      param_4 = -param_4;
      param_5 = -(param_5 + bVar6);
    }
    if ((-1 < (int)param_5) && ((bVar6 = bVar7, 0 < (int)param_5 || (param_4 != 0))))
    goto LAB_0083ab12;
  }
  else {
LAB_0083ab12:
    do {
      bVar7 = bVar6;
      pcVar4 = pcVar4 + -1;
      *pcVar4 = (&DAT_008c63f8)[param_4 & 0xf];
      lVar8 = __allshr();
      param_4 = (uint)lVar8;
      bVar6 = bVar7;
    } while (0 < lVar8);
    if (*pcVar4 != '\0') goto LAB_0083ab3a;
  }
  pcVar4 = pcVar4 + -1;
  *pcVar4 = '0';
LAB_0083ab3a:
  pcVar5 = pcVar4 + -1;
  *pcVar5 = '$';
  if (bVar7) {
    pcVar5 = pcVar4 + -2;
    *pcVar5 = '-';
  }
  pcVar4 = (char *)FUN_0083a330(param_1,param_2,param_3,local_6 + (1 - (int)pcVar5));
  if (pcVar4 == (char *)0x0) {
    return -1;
  }
  cVar2 = *pcVar5;
  while (cVar2 != '\0') {
    *pcVar4 = cVar2;
    pcVar1 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pcVar4 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  return (int)pcVar4 - param_1;
}

