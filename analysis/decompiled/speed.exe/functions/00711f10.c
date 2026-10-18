/* speed.exe 00711f10 Catch@00711f10; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702650 FUN_00702650
 */

void Catch_00711f10(void)

{
  int unaff_EBP;
  
  FUN_00702650(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

