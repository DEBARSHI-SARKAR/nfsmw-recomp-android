/* speed.exe 007e23c0 ____lc_codepage_func; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  return local_8->lc_codepage;
}

