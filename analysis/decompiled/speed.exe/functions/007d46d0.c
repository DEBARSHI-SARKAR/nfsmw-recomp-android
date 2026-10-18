/* speed.exe 007d46d0 __isctype; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d4710 ___isctype_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    __isctype
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isctype(int _C,int _Type)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  iVar2 = ___isctype_mt(local_8,_C,_Type);
  return iVar2;
}

