/* speed.exe 007cb270 FUN_007cb270; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

int * FUN_007cb270(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}

