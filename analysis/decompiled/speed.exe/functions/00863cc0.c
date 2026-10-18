/* speed.exe 00863cc0 FUN_00863cc0; analysis pseudocode, not buildable source.
 * calls 007c9470 _strncmp
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6610 FUN_007c6610
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00863cc0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *unaff_EBX;
  char local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  *unaff_EBX = -1;
  iVar2 = FUN_007c6610(param_1,"status");
  if ((iVar2 != 0) && (iVar2 = FUN_007c97c0(iVar2,0x3d), iVar2 != 0)) {
    iVar5 = 0;
    pcVar3 = (char *)(iVar2 + 1);
    iVar2 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      if ((cVar1 == '\r') || (cVar1 == '\n')) break;
      iVar5 = iVar5 + 1;
      pcVar3[(int)(local_24 + iVar2)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (iVar5 < 0x1f);
    local_24[iVar5] = '\0';
  }
  iVar2 = 0;
  while( true ) {
    pcVar3 = (&PTR_s_success_0090d4e4)[iVar2];
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = _strncmp(local_24,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    if (iVar5 == 0) break;
    iVar2 = iVar2 + 1;
    if (2 < iVar2) {
LAB_00863d56:
      pcVar3 = (char *)FUN_007c6610(param_1,&DAT_00894304);
      if (pcVar3 != (char *)0x0) {
        cVar1 = *pcVar3;
        while (cVar1 == '\n') {
          pcVar4 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar4;
        }
      }
      return;
    }
  }
  *unaff_EBX = iVar2;
  goto LAB_00863d56;
}

