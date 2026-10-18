/* speed.exe 00712413 Catch@00712413; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702960 FUN_00702960
 */

void Catch_00712413(void)

{
  int unaff_EBP;
  
  FUN_00702960(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

