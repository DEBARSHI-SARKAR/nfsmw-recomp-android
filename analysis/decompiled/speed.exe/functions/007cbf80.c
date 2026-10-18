/* speed.exe 007cbf80 FUN_007cbf80; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

void FUN_007cbf80(ulong param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}

