/* speed.exe 007f083a FUN_007f083a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000028 FindFirstFileA
 */

uint FUN_007f083a(LPCSTR param_1,DWORD *param_2)

{
  char cVar1;
  int iVar2;
  HANDLE pvVar3;
  CHAR *pCVar4;
  _WIN32_FIND_DATAA local_144;
  
  pvVar3 = FindFirstFileA(param_1,&local_144);
  if (pvVar3 != (HANDLE)0xffffffff) {
    *param_2 = local_144.dwFileAttributes;
    param_2[2] = (DWORD)pvVar3;
    param_2[1] = local_144.nFileSizeLow;
    pCVar4 = local_144.cFileName;
    iVar2 = 0xc - (int)pCVar4;
    do {
      cVar1 = *pCVar4;
      pCVar4[(int)param_2 + iVar2] = cVar1;
      pCVar4 = pCVar4 + 1;
    } while (cVar1 != '\0');
    return CONCAT31((int3)((uint)pCVar4 >> 8),1);
  }
  param_2[2] = 0xffffffff;
  return (uint)param_2 & 0xffffff00;
}

