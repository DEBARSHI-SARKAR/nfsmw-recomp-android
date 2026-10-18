/* speed.exe 00438a00 Catch@00438a00; analysis pseudocode, not buildable source.
 * calls 0040c8b0 FUN_0040c8b0
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_00438a00(void)

{
  int unaff_EBP;
  
  FUN_0040c8b0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

