/* speed.exe 00712260 Catch@00712260; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702780 FUN_00702780
 */

void Catch_00712260(void)

{
  int unaff_EBP;
  
  FUN_00702780(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

