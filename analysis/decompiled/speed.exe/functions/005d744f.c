/* speed.exe 005d744f Catch@005d744f; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d1290 FUN_005d1290
 */

void Catch_005d744f(void)

{
  int unaff_EBP;
  
  FUN_005d1290(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

