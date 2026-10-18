/* speed.exe 007c6270 _atol; analysis pseudocode, not buildable source.
 * calls 007d4710 ___isctype_mt
 * calls 007cd100 __getptd
 * calls 007d4690 __chvalidator_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Debug */

long __cdecl _atol(char *_Str)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  uint uVar3;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  pthreadlocinfo local_8;
  
  p_Var2 = __getptd();
  local_8 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  while( true ) {
    if ((int)local_8->lc_category[1].refcount < 2) {
      local_18 = __chvalidator_mt(local_8,*_Str,8);
    }
    else {
      local_18 = ___isctype_mt(local_8,*_Str,8);
    }
    if (local_18 == 0) break;
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_Str + 1), local_14 = uVar3, uVar3 == 0x2b)) {
    local_14 = (uint)(byte)_Str[1];
    pbVar1 = (byte *)(_Str + 2);
  }
  _Str = (char *)pbVar1;
  local_10 = 0;
  while( true ) {
    if ((local_14 < 0x30) || (0x39 < local_14)) {
      local_1c = -1;
    }
    else {
      local_1c = local_14 - 0x30;
    }
    if (local_1c == -1) break;
    local_10 = local_10 * 10 + local_1c;
    local_14 = (uint)(byte)*_Str;
    _Str = _Str + 1;
  }
  if (uVar3 == 0x2d) {
    local_10 = -local_10;
  }
  return local_10;
}

