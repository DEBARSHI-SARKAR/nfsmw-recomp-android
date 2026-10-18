/* speed.exe 006fb130 Catch@006fb130; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 006eb100 FUN_006eb100
 */

void Catch_006fb130(void)

{
  int unaff_EBP;
  
  FUN_006eb100(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

