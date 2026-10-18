/* speed.exe 007ca720 _isupper; analysis pseudocode, not buildable source.
 * calls 007d4710 ___isctype_mt
 * calls 007cd100 __getptd
 * calls 007d4690 __chvalidator_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _isupper
   
   Library: Visual Studio 2003 Debug */

int __cdecl _isupper(int _C)

{
  _ptiddata p_Var1;
  int local_c;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  if ((int)local_8->lc_category[1].refcount < 2) {
    local_c = __chvalidator_mt(local_8,_C,1);
  }
  else {
    local_c = ___isctype_mt(local_8,_C,1);
  }
  return local_c;
}

