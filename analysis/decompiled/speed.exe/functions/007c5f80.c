/* speed.exe 007c5f80 _tolower; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007c5fc0 ___tolower_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2003 Debug */

int __cdecl _tolower(int _C)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  iVar2 = ___tolower_mt(local_8,_C);
  return iVar2;
}

