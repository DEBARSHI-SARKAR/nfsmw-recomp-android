/* speed.exe 0050b800 Catch@0050b800; analysis pseudocode, not buildable source.
 * calls 005000a0 FUN_005000a0
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_0050b800(void)

{
  int unaff_EBP;
  
  FUN_005000a0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

