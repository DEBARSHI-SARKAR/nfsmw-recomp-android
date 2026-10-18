/* speed.exe 0083d820 FUN_0083d820; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 0084bcb0 GetTickCount
 * calls 0083d010 FUN_0083d010
 */

undefined4 FUN_0083d820(int param_1,char *param_2,undefined4 param_3,char *param_4,char *param_5)

{
  char cVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0xffffffff;
  }
  pcVar2 = param_4 + 1;
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  if (0x200 < (uint)((int)param_4 - (int)pcVar2)) {
    return 0xfffffffe;
  }
  if (param_5 != (char *)0x0) {
    pcVar2 = param_5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x80 < (uint)((int)pcVar2 - (int)(param_5 + 1))) {
      return 0xfffffffd;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  pcVar2 = (char *)(param_1 + 0x4c);
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if (param_5 != (char *)0x0) {
    _strncpy((char *)(param_1 + 0x4c),param_5,0x7f);
  }
  DVar3 = GetTickCount();
  iVar4 = DVar3 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  _strncpy((char *)(param_1 + 0x2c),param_2,0xf);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  FUN_0083d010(param_2,PTR_DAT_0090d318);
  return 0;
}

