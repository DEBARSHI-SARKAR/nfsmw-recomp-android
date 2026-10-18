/* speed.exe 007e6f30 __mbsnbicoll; analysis pseudocode, not buildable source.
 * calls 007dae20 ___crtCompareStringA
 * calls 007cd100 __getptd
 * calls 007dd1d0 ___updatetmbcinfo
 */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  int iVar2;
  int in_stack_fffffff4;
  pthreadmbcinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = p_Var1->_tpxcptinfoptrs;
  if (local_8 != DAT_009c50a4) {
    local_8 = ___updatetmbcinfo();
  }
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ___crtCompareStringA
                      (*(_locale_t *)local_8->mbulinfo,(LPCWSTR)0x1,(DWORD)_Str1,(LPCSTR)_MaxCount,
                       (int)_Str2,(LPCSTR)_MaxCount,local_8->mbcodepage,in_stack_fffffff4);
    if (iVar2 == 0) {
      iVar2 = 0x7fffffff;
    }
    else {
      iVar2 = iVar2 + -2;
    }
  }
  return iVar2;
}

