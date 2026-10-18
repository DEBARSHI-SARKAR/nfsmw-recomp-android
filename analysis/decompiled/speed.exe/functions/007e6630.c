/* speed.exe 007e6630 __stricmp; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007c5fc0 ___tolower_mt
 * calls 007d2f80 ___updatetlocinfo
 * calls 007e6380 ___ascii_stricmp
 */

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2003 Debug */

int __cdecl __stricmp(char *_Str1,char *_Str2)

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
  if (local_8->lc_category[0].wlocale == (wchar_t *)0x0) {
    iVar2 = ___ascii_stricmp(_Str1,_Str2);
  }
  else {
    do {
      iVar2 = ___tolower_mt(local_8,*_Str1);
      _Str1 = _Str1 + 1;
      iVar3 = ___tolower_mt(local_8,*_Str2);
      _Str2 = _Str2 + 1;
      if (iVar2 == 0) break;
    } while (iVar2 == iVar3);
    iVar2 = iVar2 - iVar3;
  }
  return iVar2;
}

