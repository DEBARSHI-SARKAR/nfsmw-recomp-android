/* speed.exe 00855570 FUN_00855570; analysis pseudocode, not buildable source.
 * calls 008550f0 FUN_008550f0
 * calls 007d6cb0 __security_check_cookie
 * calls 00854920 FUN_00854920
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00855570(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  char local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  pcVar2 = (char *)FUN_00854920();
  if ((pcVar2 == (char *)0x0) ||
     (iVar4 = *(int *)(unaff_ESI + 0x640) + 1, *(int *)(unaff_ESI + 0x640) = iVar4, 3 < iVar4)) {
    *(undefined4 *)(unaff_ESI + 0x60c) = 7;
    return;
  }
  cVar3 = *pcVar2;
  while (cVar3 != '\0') {
    if (cVar3 == ' ') {
      cVar3 = *pcVar2;
      if (cVar3 != '\0') goto LAB_008555e5;
      break;
    }
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar1;
  }
  goto LAB_008555f2;
  while( true ) {
    cVar3 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
    if (cVar3 == '\0') break;
LAB_008555e5:
    if (' ' < cVar3) break;
  }
LAB_008555f2:
  cVar3 = *pcVar2;
  for (iVar4 = 0; (' ' < cVar3 && (iVar4 < 0x1ff)); iVar4 = iVar4 + 1) {
    pcVar2 = pcVar2 + 1;
    local_204[iVar4] = cVar3;
    cVar3 = *pcVar2;
  }
  local_204[iVar4] = '\0';
  *(undefined4 *)(unaff_ESI + 0x654) = 0;
  FUN_008550f0();
  return;
}

