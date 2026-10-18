/* speed.exe 007cd420 __freeptd; analysis pseudocode, not buildable source.
 * calls 007cd1a0 __freefls@4
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2003 Debug */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_0090682c != -1) {
    if (_Ptd == (_ptiddata)0x0) {
      _Ptd = (_ptiddata)(*DAT_009bac08)(DAT_0090682c);
    }
    __freefls_4(_Ptd);
    (*DAT_009bac0c)(DAT_0090682c,0);
  }
  return;
}

