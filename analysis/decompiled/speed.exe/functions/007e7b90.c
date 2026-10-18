/* speed.exe 007e7b90 __mbschr; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007dd1d0 ___updatetmbcinfo
 * calls 007c97c0 FUN_007c97c0
 */

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2003 Debug */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  _ptiddata p_Var2;
  uchar *puVar3;
  ushort uVar4;
  pthreadmbcinfo local_c;
  
  p_Var2 = __getptd();
  local_c = p_Var2->_tpxcptinfoptrs;
  if (local_c != DAT_009c50a4) {
    local_c = ___updatetmbcinfo();
  }
  if (local_c->ismbcodepage == 0) {
    _Str = (uchar *)FUN_007c97c0(_Str,_Ch);
  }
  else {
    while( true ) {
      bVar1 = *_Str;
      uVar4 = (ushort)bVar1;
      if (uVar4 == 0) break;
      if ((local_c->mbctype[bVar1 + 5] & 4) == 0) {
        puVar3 = _Str;
        if (_Ch == uVar4) break;
      }
      else {
        puVar3 = _Str + 1;
        if (*puVar3 == '\0') {
          return (uchar *)0x0;
        }
        if (_Ch == CONCAT11(bVar1,*puVar3)) {
          return _Str;
        }
      }
      _Str = puVar3;
      _Str = _Str + 1;
    }
    if (_Ch != uVar4) {
      _Str = (uchar *)0x0;
    }
  }
  return _Str;
}

