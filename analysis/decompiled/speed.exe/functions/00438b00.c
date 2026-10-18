/* speed.exe 00438b00 Catch@00438b00; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 0040c970 FUN_0040c970
 */

void Catch_00438b00(void)

{
  int unaff_EBP;
  
  FUN_0040c970(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

