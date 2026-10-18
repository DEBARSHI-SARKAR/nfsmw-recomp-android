/* speed.exe 0083bb00 FUN_0083bb00; analysis pseudocode, not buildable source.
 * calls 0083a140 FUN_0083a140
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 * calls 0083a330 FUN_0083a330
 * calls 0084a730 FUN_0084a730
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083bb00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_3c [36];
  char local_18 [20];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_4 == 0) {
    FUN_0084a730();
  }
  puVar2 = (undefined4 *)FUN_0083a140(local_3c);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  iVar3 = _sprintf(local_18,"%d.%d.%d-%d:%02d:%02d",puVar2[5] + 0x76c,puVar2[4] + 1,puVar2[3],
                   puVar2[2],puVar2[1],*puVar2);
  iVar4 = FUN_0083a330(param_1,param_2,param_3,iVar3);
  if (iVar4 == 0) {
    return -1;
  }
  pcVar5 = local_18;
  iVar6 = iVar4 - (int)pcVar5;
  do {
    cVar1 = *pcVar5;
    pcVar5[iVar6] = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)(iVar4 + iVar3);
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pcVar5 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pcVar5 = pcVar5 + 1;
  }
  *pcVar5 = '\0';
  return (int)pcVar5 - param_1;
}

