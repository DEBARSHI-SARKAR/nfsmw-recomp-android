/* speed.exe 00842a20 FUN_00842a20; analysis pseudocode, not buildable source.
 * calls 007c9470 _strncmp
 * calls 007c6100 _sprintf
 * calls 007c64e0 _strncpy
 * calls 00846040 FUN_00846040
 * calls 008421c0 FUN_008421c0
 */

void FUN_00842a20(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *(undefined1 *)*param_1 = 0;
  param_1[0x484] = 0;
  iVar2 = _strncmp(param_2,"http://",7);
  if ((iVar2 == 0) || (iVar2 = _strncmp(param_2,"https://",8), iVar2 == 0)) {
    _sprintf((char *)*param_1,"%%{ CMD=http SUCCESS-GOTO=\"$home\" URL-GET=%s\n%%}",param_2);
  }
  else {
    iVar2 = FUN_00846040(param_2,&DAT_008c6b30);
    if (iVar2 == 0) {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < (uint)param_1[1]) {
        pcVar3 = (char *)*param_1;
        do {
          cVar1 = *param_2;
          param_2 = param_2 + 1;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
    }
    else {
      iVar2 = _sprintf((char *)*param_1,"%%{ CMD=http SUCCESS-GOTO=\"$home\" URL-FAKE=1\n%%}");
      _strncpy((char *)(*param_1 + 1 + iVar2),param_2,(param_1[1] - iVar2) - 1);
      *(undefined1 *)(*param_1 + -1 + param_1[1]) = 0;
    }
  }
  iVar2 = FUN_008421c0(param_1,*param_1,"startup");
  param_1[0x484] = iVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (iVar2 == 0) {
    param_1[0x484] = *param_1;
  }
  return;
}

