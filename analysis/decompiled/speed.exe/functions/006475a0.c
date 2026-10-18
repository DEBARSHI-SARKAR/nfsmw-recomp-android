/* speed.exe 006475a0 Catch@006475a0; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00609020 FUN_00609020
 */

void Catch_006475a0(void)

{
  int unaff_EBP;
  
  FUN_00609020(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

