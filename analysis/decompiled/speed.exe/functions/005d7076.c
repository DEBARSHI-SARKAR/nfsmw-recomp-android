/* speed.exe 005d7076 Catch@005d7076; analysis pseudocode, not buildable source.
 * calls 005d5f30 FUN_005d5f30
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_005d7076(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0xc) * 4;
  FUN_005d5f30(iVar1 + *(int *)(unaff_EBP + 8),*(int *)(*(int *)(unaff_EBP + -0x1c) + 8) + iVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

