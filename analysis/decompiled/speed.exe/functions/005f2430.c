/* speed.exe 005f2430 Catch@005f2430; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005df500 FUN_005df500
 */

void Catch_005f2430(void)

{
  int unaff_EBP;
  
  FUN_005df500(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

