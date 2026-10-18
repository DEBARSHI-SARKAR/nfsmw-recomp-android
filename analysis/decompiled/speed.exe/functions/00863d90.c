/* speed.exe 00863d90 FUN_00863d90; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083fb40 FUN_0083fb40
 * calls 007c6610 FUN_007c6610
 * calls 007c6380 _atoi
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_00863d90(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar5 = 0;
  iVar2 = FUN_007c6610();
  if (iVar2 != 0) {
    iVar2 = FUN_007c97c0(iVar2,0x3d);
    if (iVar2 != 0) {
      iVar4 = 0;
      pcVar3 = (char *)(iVar2 + 1);
      iVar2 = -(int)pcVar3;
      do {
        cVar1 = *pcVar3;
        if ((cVar1 == '\r') || (cVar1 == '\n')) break;
        iVar4 = iVar4 + 1;
        pcVar3[(int)(local_24 + iVar2)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (iVar4 < 0x1f);
      local_24[iVar4] = '\0';
    }
    iVar2 = FUN_0083fb40(local_24);
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      iVar5 = 1;
    }
  }
  iVar2 = FUN_007c6610();
  if (iVar2 != 0) {
    iVar2 = FUN_007c97c0(iVar2,0x3d);
    if (iVar2 != 0) {
      iVar4 = 0;
      pcVar3 = (char *)(iVar2 + 1);
      iVar2 = -(int)pcVar3;
      do {
        cVar1 = *pcVar3;
        if ((cVar1 == '\r') || (cVar1 == '\n')) break;
        iVar4 = iVar4 + 1;
        pcVar3[(int)(local_24 + iVar2)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (iVar4 < 0x1f);
      local_24[iVar4] = '\0';
    }
    iVar2 = _atoi(local_24);
    *(int *)(param_1 + 0x14) = iVar2;
    iVar5 = iVar5 + 1;
  }
  return iVar5 == 2;
}

