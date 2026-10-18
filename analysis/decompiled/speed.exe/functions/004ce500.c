/* speed.exe 004ce500 Catch@004ce500; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 004b6e50 FUN_004b6e50
 */

void Catch_004ce500(void)

{
  int unaff_EBP;
  
  FUN_004b6e50(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

