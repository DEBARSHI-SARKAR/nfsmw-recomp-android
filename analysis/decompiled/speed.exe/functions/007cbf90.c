/* speed.exe 007cbf90 _rand; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int __cdecl _rand(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  return p_Var1->_holdrand >> 0x10 & 0x7fff;
}

