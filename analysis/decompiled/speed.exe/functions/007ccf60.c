/* speed.exe 007ccf60 __mtinit; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000006b TlsSetValue
 * calls 007c6b60 __calloc_dbg
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls 007d0d60 __mtinitlocks
 * calls EXTERNAL:0000000d GetProcAddress
 * calls 007cd0b0 __mtterm
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls 007ccf50 ___crtTlsAlloc@4
 * calls 007cd0e0 __initptd
 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mtinit(void)

{
  int iVar1;
  HMODULE hModule;
  _ptiddata _Ptd;
  DWORD DVar2;
  code *_Locale;
  
  iVar1 = __mtinitlocks();
  if (iVar1 == 0) {
    __mtterm();
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_009bac04 = GetProcAddress(hModule,"FlsAlloc");
      DAT_009bac08 = GetProcAddress(hModule,"FlsGetValue");
      DAT_009bac0c = GetProcAddress(hModule,"FlsSetValue");
      DAT_009bac10 = GetProcAddress(hModule,"FlsFree");
      if (DAT_009bac08 == (FARPROC)0x0) {
        DAT_009bac04 = ___crtTlsAlloc_4;
        DAT_009bac08 = TlsGetValue_exref;
        DAT_009bac0c = TlsSetValue_exref;
        DAT_009bac10 = TlsFree_exref;
      }
    }
    _Locale = __freefls_4;
    DAT_0090682c = (*DAT_009bac04)();
    if (DAT_0090682c == -1) {
      __mtterm();
    }
    else {
      _Ptd = (_ptiddata)__calloc_dbg(1,0x8c,2,"tidtable.c",0xa3);
      if ((_Ptd != (_ptiddata)0x0) && (iVar1 = (*DAT_009bac0c)(DAT_0090682c,_Ptd), iVar1 != 0)) {
        __initptd(_Ptd,(pthreadlocinfo)_Locale);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        return 1;
      }
      __mtterm();
    }
  }
  return 0;
}

