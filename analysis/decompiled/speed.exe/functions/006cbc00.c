/* speed.exe 006cbc00 FUN_006cbc00; analysis pseudocode, not buildable source.
 * calls 007c4000 CreateToolhelp32Snapshot
 * calls 007c3ff4 Process32Next
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:0000001f Sleep
 * calls 007cbb10 _strrchr
 * calls 007e6630 __stricmp
 * calls 007c3ffa Process32First
 */

bool FUN_006cbc00(void)

{
  char cVar1;
  HANDLE hObject;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_228 [4];
  char acStack_218 [260];
  char acStack_114 [264];
  char *pcStack_c;
  int iStack_8;
  
  puVar5 = local_228;
  for (iVar4 = 0x49; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = 3;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  while( true ) {
    if (hObject == (HANDLE)0xffffffff) {
      return false;
    }
    iVar6 = 0;
    iVar2 = Process32First(hObject,&stack0xfffffdcc);
    while (iVar2 != 0) {
      pcVar3 = _strrchr(acStack_218,0x5c);
      if (pcVar3 == (char *)0x0) {
        iVar2 = 0;
        do {
          pcVar3 = acStack_218 + iVar2;
          acStack_114[iVar2] = *pcVar3;
          iVar2 = iVar2 + 1;
        } while (*pcVar3 != '\0');
      }
      else {
        pcVar3 = pcVar3 + 1;
        iVar2 = -(int)pcVar3;
        do {
          cVar1 = *pcVar3;
          pcVar3[(int)(acStack_114 + iVar2)] = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
      iVar2 = __stricmp(pcStack_c,acStack_114);
      if (iVar2 == 0) {
        iVar6 = iVar6 + 1;
      }
      iVar2 = Process32Next(hObject,&stack0xfffffdc4);
    }
    CloseHandle(hObject);
    iVar4 = iVar4 + -1;
    if ((iVar6 <= iStack_8) || (iVar4 < 0)) break;
    Sleep(1000);
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  }
  return iStack_8 < iVar6;
}

