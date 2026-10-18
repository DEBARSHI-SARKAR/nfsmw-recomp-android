/* speed.exe 0085d600 __beginthreadex; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls EXTERNAL:0000003f CreateThread
 * calls 007cb1d0 __dosmaperr
 * calls 007c6b60 __calloc_dbg
 * calls 007cd0e0 __initptd
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:0000004a GetLastError
 */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2003 Debug */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  undefined4 *puVar1;
  _ptiddata _Ptd;
  HANDLE pvVar2;
  pthreadlocinfo _Locale;
  uint local_8;
  
  _Locale = (pthreadlocinfo)0x0;
  if (_StartAddress == (_StartAddress *)0x0) {
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 0x16;
  }
  else {
    _Ptd = (_ptiddata)__calloc_dbg(1,0x8c,2,"threadex.c",0x74);
    if (_Ptd != (_ptiddata)0x0) {
      __initptd(_Ptd,_Locale);
      *(_StartAddress **)_Ptd->_con_ch_buf = _StartAddress;
      *(void **)(_Ptd->_con_ch_buf + 4) = _ArgList;
      _Ptd->_thandle = 0xffffffff;
      if (_ThrdAddr == (uint *)0x0) {
        _ThrdAddr = &local_8;
      }
      pvVar2 = CreateThread(_Security,_StackSize,__threadstartex_4,_Ptd,_InitFlag,_ThrdAddr);
      if (pvVar2 != (HANDLE)0x0) {
        return (uintptr_t)pvVar2;
      }
      _Locale = (pthreadlocinfo)GetLastError();
    }
    __free_dbg(_Ptd,2);
    if (_Locale != (pthreadlocinfo)0x0) {
      __dosmaperr((ulong)_Locale);
    }
  }
  return 0;
}

