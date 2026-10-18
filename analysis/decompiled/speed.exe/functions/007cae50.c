/* speed.exe 007cae50 _strcoll; analysis pseudocode, not buildable source.
 * calls 007dae20 ___crtCompareStringA
 * calls 007cd100 __getptd
 * calls 007cb270 FUN_007cb270
 * calls 007d1120 _strcmp
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _strcoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl _strcoll(char *_Str1,char *_Str2)

{
  _ptiddata p_Var1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_fffffff4;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  if ((local_8->lc_category[0].locale == (char *)0x0) && (DAT_009bad9c == 0)) {
    iVar2 = _strcmp(_Str1,_Str2);
  }
  else {
    iVar2 = ___crtCompareStringA
                      ((_locale_t)local_8->lc_category[0].locale,(LPCWSTR)0x1000,(DWORD)_Str1,
                       (LPCSTR)0xffffffff,(int)_Str2,(LPCSTR)0xffffffff,local_8->lc_collate_cp,
                       in_stack_fffffff4);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0x16;
      iVar2 = 0x7fffffff;
    }
    else {
      iVar2 = iVar2 + -2;
    }
  }
  return iVar2;
}

