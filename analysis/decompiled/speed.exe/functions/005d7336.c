/* speed.exe 005d7336 Catch@005d7336; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d1200 FUN_005d1200
 */

void Catch_005d7336(void)

{
  int unaff_EBP;
  
  FUN_005d1200(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

