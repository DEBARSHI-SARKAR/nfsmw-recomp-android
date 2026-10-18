/* speed.exe 006fb030 Catch@006fb030; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 006eb030 FUN_006eb030
 */

void Catch_006fb030(void)

{
  int unaff_EBP;
  
  FUN_006eb030(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

