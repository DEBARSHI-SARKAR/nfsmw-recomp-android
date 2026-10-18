/* speed.exe 007cd100 __getptd; analysis pseudocode, not buildable source.
 * calls 007c6b60 __calloc_dbg
 * calls EXTERNAL:0000004a GetLastError
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls 007cd0e0 __initptd
 * calls 007c4240 __amsg_exit
 * calls EXTERNAL:0000006d SetLastError
 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2003 Debug */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  int iVar1;
  DWORD DVar2;
  pthreadlocinfo _Locale;
  _ptiddata local_c;
  
  dwErrCode = GetLastError();
  _Locale = DAT_0090682c;
  local_c = (_ptiddata)(*DAT_009bac08)();
  if (local_c == (_ptiddata)0x0) {
    local_c = (_ptiddata)__calloc_dbg(1,0x8c,2,"tidtable.c",300);
    if (local_c != (_ptiddata)0x0) {
      iVar1 = (*DAT_009bac0c)(DAT_0090682c,local_c);
      if (iVar1 != 0) {
        __initptd(local_c,_Locale);
        DVar2 = GetCurrentThreadId();
        local_c->_tid = DVar2;
        local_c->_thandle = 0xffffffff;
        goto LAB_007cd18a;
      }
    }
    __amsg_exit(0x10);
  }
LAB_007cd18a:
  SetLastError(dwErrCode);
  return local_c;
}

