/* speed.exe 007d0a90 unexpected; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007d0a20 terminate
 */

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_ownlocale != 0) {
    p_Var1 = __getptd();
    (*(code *)p_Var1->_ownlocale)();
  }
  terminate();
  return;
}

