/* speed.exe 007c63a0 __atoi64; analysis pseudocode, not buildable source.
 * calls 007c5f30 __allmul
 * calls 007d4710 ___isctype_mt
 * calls 007cd100 __getptd
 * calls 007d4690 __chvalidator_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    __atoi64
   
   Library: Visual Studio 2003 Debug */

longlong __cdecl __atoi64(char *_String)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  uint uVar3;
  longlong lVar4;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  pthreadlocinfo local_8;
  
  p_Var2 = __getptd();
  local_8 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  while( true ) {
    if ((int)local_8->lc_category[1].refcount < 2) {
      local_1c = __chvalidator_mt(local_8,*_String,8);
    }
    else {
      local_1c = ___isctype_mt(local_8,*_String,8);
    }
    if (local_1c == 0) break;
    _String = _String + 1;
  }
  uVar3 = (uint)(byte)*_String;
  if ((uVar3 == 0x2d) || (pbVar1 = (byte *)(_String + 1), local_18 = uVar3, uVar3 == 0x2b)) {
    local_18 = (uint)(byte)_String[1];
    pbVar1 = (byte *)(_String + 2);
  }
  _String = (char *)pbVar1;
  lVar4 = 0;
  while( true ) {
    local_10 = (int)((ulonglong)lVar4 >> 0x20);
    local_14 = (int)lVar4;
    if ((local_18 < 0x30) || (0x39 < local_18)) {
      local_20 = -1;
    }
    else {
      local_20 = local_18 - 0x30;
    }
    if (local_20 == -1) break;
    lVar4 = __allmul(lVar4,10,0);
    lVar4 = lVar4 + local_20;
    local_18 = (uint)(byte)*_String;
    _String = _String + 1;
  }
  if (uVar3 == 0x2d) {
    lVar4 = CONCAT44(-(local_10 + (uint)(local_14 != 0)),-local_14);
  }
  return lVar4;
}

