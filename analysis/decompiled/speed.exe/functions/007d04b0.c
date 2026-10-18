/* speed.exe 007d04b0 FUN_007d04b0; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

bool FUN_007d04b0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_purecall != (void *)0x0;
}

