/* speed.exe 005d6fe3 Catch@005d6fe3; analysis pseudocode, not buildable source.
 * calls 005d5f30 FUN_005d5f30
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d1290 FUN_005d1290
 */

void Catch_005d6fe3(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
  FUN_005d5f30(uVar1,*(undefined4 *)(unaff_EBP + 0xc));
  FUN_005d1290(uVar1,*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

