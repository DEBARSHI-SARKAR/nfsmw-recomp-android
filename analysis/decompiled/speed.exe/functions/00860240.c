/* speed.exe 00860240 _toupper; analysis pseudocode, not buildable source.
 * calls 00860280 ___toupper_mt
 * calls 007cd100 __getptd
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2003 Debug */

int __cdecl _toupper(int _C)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  iVar2 = ___toupper_mt(local_8,_C);
  return iVar2;
}

