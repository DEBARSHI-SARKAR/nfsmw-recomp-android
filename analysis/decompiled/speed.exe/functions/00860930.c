/* speed.exe 00860930 _mbtowc; analysis pseudocode, not buildable source.
 * calls 00860970 ___mbtowc_mt
 * calls 007cd100 __getptd
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2003 Debug */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadlocinfo local_8;
  
  p_Var1 = __getptd();
  local_8 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (local_8 != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_8 = ___updatetlocinfo();
  }
  iVar2 = ___mbtowc_mt(local_8,_DstCh,_SrcCh,_SrcSizeInBytes);
  return iVar2;
}

