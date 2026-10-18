/* speed.exe 005f1af0 Catch@005f1af0; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005deac0 FUN_005deac0
 */

void Catch_005f1af0(void)

{
  int unaff_EBP;
  
  FUN_005deac0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

