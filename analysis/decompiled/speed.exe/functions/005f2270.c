/* speed.exe 005f2270 Catch@005f2270; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005df0d0 FUN_005df0d0
 */

void Catch_005f2270(void)

{
  int unaff_EBP;
  
  FUN_005df0d0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

