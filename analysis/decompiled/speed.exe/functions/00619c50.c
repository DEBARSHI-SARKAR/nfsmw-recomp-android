/* speed.exe 00619c50 Catch@00619c50; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00608dc0 FUN_00608dc0
 */

void Catch_00619c50(void)

{
  int unaff_EBP;
  
  FUN_00608dc0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

