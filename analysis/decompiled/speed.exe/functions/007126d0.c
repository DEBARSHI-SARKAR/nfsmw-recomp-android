/* speed.exe 007126d0 Catch@007126d0; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702c90 FUN_00702c90
 */

void Catch_007126d0(void)

{
  int unaff_EBP;
  
  FUN_00702c90(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

