/* speed.exe 004390b8 Catch@004390b8; analysis pseudocode, not buildable source.
 * calls 0040cd00 FUN_0040cd00
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_004390b8(void)

{
  int unaff_EBP;
  
  FUN_0040cd00(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

