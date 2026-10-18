/* speed.exe 007e66e0 __strnicmp; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007e7460 ___ascii_strnicmp
 * calls 007c5fc0 ___tolower_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2003 Debug */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  int iVar2;
  int iVar3;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else if (local_8->lc_category[0].wlocale == (wchar_t *)0x0) {
    iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
  }
  else {
    do {
      iVar2 = ___tolower_mt(local_8,*_Str1);
      _Str1 = _Str1 + 1;
      iVar3 = ___tolower_mt(local_8,*_Str2);
      _Str2 = _Str2 + 1;
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (iVar2 == 0)) break;
    } while (iVar2 == iVar3);
    iVar2 = iVar2 - iVar3;
  }
  return iVar2;
}

