/* speed.exe 007dd1c0 ___pxcptinfoptrs; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

/* Library Function - Single Match
    ___pxcptinfoptrs
   
   Library: Visual Studio 2003 Debug */

void ** __cdecl ___pxcptinfoptrs(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_initarg;
}

