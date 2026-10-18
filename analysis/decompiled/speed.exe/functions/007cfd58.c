/* speed.exe 007cfd58 FUN_007cfd58; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 */

void FUN_007cfd58(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    *(void ***)(unaff_EBP + -0x28) = &p_Var1->_purecall;
    **(int **)(unaff_EBP + -0x28) = **(int **)(unaff_EBP + -0x28) + -1;
  }
  return;
}

