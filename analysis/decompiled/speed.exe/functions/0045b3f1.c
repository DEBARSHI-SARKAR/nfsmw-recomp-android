/* speed.exe 0045b3f1 Catch@0045b3f1; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d0370 FUN_005d0370
 */

void Catch_0045b3f1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_005d0370(*(int *)(unaff_EBP + -0x18),*(int *)(unaff_EBP + 8) * 4,
                 &PTR_LAB_004c5452_1_00890f10);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

