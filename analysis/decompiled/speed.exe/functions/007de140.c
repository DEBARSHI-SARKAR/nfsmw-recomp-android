/* speed.exe 007de140 ___crtMessageBoxA; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000e LoadLibraryA
 * calls EXTERNAL:0000000d GetProcAddress
 */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  bool bVar1;
  HMODULE hModule;
  int iVar2;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  uint local_8;
  
  local_18 = 0;
  bVar1 = false;
  if (DAT_009baedc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_009baedc = GetProcAddress(hModule,"MessageBoxA"), DAT_009baedc == (FARPROC)0x0)) {
      return 0;
    }
    DAT_009baee0 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_009baee4 = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_009baa20 == 2) &&
       (DAT_009baeec = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_009baeec != (FARPROC)0x0)) {
      DAT_009baee8 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_009baee8 != (FARPROC)0x0) &&
     (((local_14 = (*DAT_009baee8)(), local_14 == 0 ||
       (iVar2 = (*DAT_009baeec)(local_14,1,local_10,0xc,local_1c), iVar2 == 0)) ||
      ((local_8 & 1) == 0)))) {
    bVar1 = true;
  }
  if (bVar1) {
    if (DAT_009baa2c < 4) {
      _UType = _UType | 0x40000;
    }
    else {
      _UType = _UType | 0x200000;
    }
  }
  else {
    if (DAT_009baee0 != (FARPROC)0x0) {
      local_18 = (*DAT_009baee0)();
    }
    if ((local_18 != 0) && (DAT_009baee4 != (FARPROC)0x0)) {
      local_18 = (*DAT_009baee4)(local_18);
    }
  }
  iVar2 = (*DAT_009baedc)(local_18,_LpText,_LpCaption,_UType);
  return iVar2;
}

