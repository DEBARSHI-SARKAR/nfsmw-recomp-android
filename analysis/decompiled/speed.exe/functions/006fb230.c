/* speed.exe 006fb230 Catch@006fb230; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 006eb1c0 FUN_006eb1c0
 */

void Catch_006fb230(void)

{
  int unaff_EBP;
  
  FUN_006eb1c0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

