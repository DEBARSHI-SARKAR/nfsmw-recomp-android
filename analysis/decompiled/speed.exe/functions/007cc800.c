/* speed.exe 007cc800 ___crtGetEnvironmentStringsA; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:00000060 FreeEnvironmentStringsW
 * calls EXTERNAL:00000061 WideCharToMultiByte
 * calls 007d6d30 FID_conflict:_memcpy
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:0000005f GetEnvironmentStrings
 * calls EXTERNAL:00000062 GetEnvironmentStringsW
 * calls EXTERNAL:0000005e FreeEnvironmentStringsA
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2003 Debug */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  LPCH pCVar1;
  LPWCH pWVar2;
  DWORD DVar3;
  int iVar4;
  LPCH _Src;
  int cchWideChar;
  LPSTR local_1c;
  char *local_14;
  LPWCH local_10;
  LPWCH local_c;
  
  local_c = (LPWCH)0x0;
  if (DAT_009bac00 == 0) {
    local_c = GetEnvironmentStringsW();
    if (local_c == (LPWCH)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_009bac00 = 2;
      }
    }
    else {
      DAT_009bac00 = 1;
    }
  }
  if (DAT_009bac00 == 1) {
    if ((local_c == (LPWCH)0x0) && (local_c = GetEnvironmentStringsW(), local_c == (LPWCH)0x0)) {
      local_1c = (LPSTR)0x0;
    }
    else {
      local_10 = local_c;
      pWVar2 = local_10;
      while (local_10 = pWVar2, *local_10 != L'\0') {
        pWVar2 = local_10 + 1;
        if (local_10[1] == L'\0') {
          pWVar2 = local_10 + 2;
        }
      }
      cchWideChar = ((int)local_10 - (int)local_c >> 1) + 1;
      iVar4 = WideCharToMultiByte(0,0,local_c,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar4 == 0) ||
         (local_1c = (LPSTR)__malloc_dbg(iVar4,2,"a_env.c",0x61), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_c);
        local_1c = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_c,cchWideChar,local_1c,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar4 == 0) {
          __free_dbg(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_c);
      }
    }
  }
  else if ((DAT_009bac00 == 2) || (DAT_009bac00 == 0)) {
    _Src = GetEnvironmentStrings();
    pCVar1 = _Src;
    if (_Src == (LPCH)0x0) {
      local_1c = (LPSTR)0x0;
    }
    else {
      while (local_14 = pCVar1, *local_14 != '\0') {
        pCVar1 = local_14 + 1;
        if (local_14[1] == '\0') {
          pCVar1 = local_14 + 2;
        }
      }
      local_1c = (LPSTR)__malloc_dbg(local_14 + (1 - (int)_Src),2,"a_env.c",0x8c);
      if (local_1c == (LPSTR)0x0) {
        FreeEnvironmentStringsA(_Src);
        local_1c = (LPSTR)0x0;
      }
      else {
        FID_conflict__memcpy(local_1c,_Src,(size_t)(local_14 + (1 - (int)_Src)));
        FreeEnvironmentStringsA(_Src);
      }
    }
  }
  else {
    local_1c = (LPSTR)0x0;
  }
  return local_1c;
}

