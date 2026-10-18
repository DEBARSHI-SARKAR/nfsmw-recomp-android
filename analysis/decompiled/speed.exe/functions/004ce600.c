/* speed.exe 004ce600 Catch@004ce600; analysis pseudocode, not buildable source.
 * calls 004b6ef0 FUN_004b6ef0
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_004ce600(void)

{
  int unaff_EBP;
  
  FUN_004b6ef0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

