/* speed.exe 007f0895 FUN_007f0895; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000029 FindNextFileA
 */

undefined4 FUN_007f0895(DWORD *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  CHAR *pCVar4;
  undefined4 uVar5;
  _WIN32_FIND_DATAA local_144;
  
  BVar3 = FindNextFileA((HANDLE)param_1[2],&local_144);
  if (BVar3 == 0) {
    uVar5 = 0;
  }
  else {
    *param_1 = local_144.dwFileAttributes;
    param_1[1] = local_144.nFileSizeLow;
    pCVar4 = local_144.cFileName;
    iVar2 = 0xc - (int)pCVar4;
    do {
      cVar1 = *pCVar4;
      pCVar4[(int)param_1 + iVar2] = cVar1;
      pCVar4 = pCVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = CONCAT31((int3)((uint)pCVar4 >> 8),1);
  }
  return uVar5;
}

