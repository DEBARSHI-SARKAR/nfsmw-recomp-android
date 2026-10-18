/* speed.exe 00857c50 FUN_00857c50; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000c3 wsprintfA
 * calls EXTERNAL:00000006 CloseHandle
 * calls EXTERNAL:00000093 CreateFileA
 */

undefined4 FUN_00857c50(undefined4 param_1,char *param_2,LPSTR param_3,char *param_4,CHAR param_5)

{
  char cVar1;
  char *pcVar2;
  HANDLE hObject;
  int iVar3;
  undefined **ppuVar4;
  LPSTR pCVar5;
  LPCSTR lpFileName;
  char *pcVar6;
  bool bVar7;
  undefined *local_14;
  undefined *local_10 [4];
  
  local_14 = &DAT_008c7674;
  local_10[0] = &DAT_008c766c;
  local_10[1] = &DAT_008c7664;
  local_10[2] = &DAT_008c765c;
  local_10[3] = (undefined *)0x0;
  *param_3 = '*';
  param_3[1] = '\0';
  param_3[2] = '\0';
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0xffffffff;
  }
  if (0x3f < (int)param_4) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 + (2 - (int)(param_2 + 1)) <= param_4) {
      iVar3 = 10;
      bVar7 = true;
      pcVar2 = param_2;
      pcVar6 = "localhost";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar2 == *pcVar6;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        wsprintfA(param_3,"%s%c",param_2,0);
        return 1;
      }
      lpFileName = "COM1";
      ppuVar4 = &local_14;
      pCVar5 = param_3;
      do {
        hObject = CreateFileA(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                              (HANDLE)0x0);
        if (hObject != (HANDLE)0xffffffff) {
          CloseHandle(hObject);
          if (pCVar5 != param_3) {
            *pCVar5 = param_5;
            pCVar5 = pCVar5 + 1;
          }
          iVar3 = wsprintfA(pCVar5,"%s",lpFileName);
          pCVar5 = pCVar5 + iVar3;
        }
        lpFileName = ppuVar4[1];
        ppuVar4 = ppuVar4 + 1;
      } while (lpFileName != (LPCSTR)0x0);
      *pCVar5 = '\0';
      pCVar5[1] = '\0';
      return 1;
    }
  }
  return 0xfffffffa;
}

