/* speed.exe 007df050 _wctomb; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007df090 ___wctomb_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2003 Debug */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  _ptiddata p_Var1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  uVar3 = extraout_var;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
    uVar3 = extraout_var_00;
  }
  iVar2 = ___wctomb_mt(local_8,_MbCh,CONCAT22(uVar3,_WCh));
  return iVar2;
}

