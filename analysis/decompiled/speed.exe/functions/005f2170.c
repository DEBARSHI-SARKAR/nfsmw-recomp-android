/* speed.exe 005f2170 Catch@005f2170; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005defa0 FUN_005defa0
 */

void Catch_005f2170(void)

{
  int unaff_EBP;
  
  FUN_005defa0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

