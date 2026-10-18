/* speed.exe 007dfc10 __Strftime; analysis pseudocode, not buildable source.
 * calls 007dfc60 __Strftime_mt
 * calls 007cd100 __getptd
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2003 Debug */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  _ptiddata p_Var1;
  size_t sVar2;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  sVar2 = __Strftime_mt(local_8,param_1,_Maxsize,param_3,param_4,param_5);
  return sVar2;
}

