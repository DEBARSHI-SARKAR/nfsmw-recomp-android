/* speed.exe 007cb280 FUN_007cb280; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

ulong * FUN_007cb280(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}

