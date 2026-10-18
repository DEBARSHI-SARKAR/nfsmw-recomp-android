/* speed.exe 007125d0 Catch@007125d0; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702bf0 FUN_00702bf0
 */

void Catch_007125d0(void)

{
  int unaff_EBP;
  
  FUN_00702bf0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

