/* speed.exe 00438f80 Catch@00438f80; analysis pseudocode, not buildable source.
 * calls 0040cc60 FUN_0040cc60
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_00438f80(void)

{
  int unaff_EBP;
  
  FUN_0040cc60(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

