/* speed.exe 00425178 Catch@00425178; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 007c56b0 __CxxThrowException@8
 */

void Catch_00425178(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if ((0xf < *(uint *)(iVar1 + 0x18)) && (*(int *)(iVar1 + 4) != 0)) {
    FUN_005d0370(*(int *)(iVar1 + 4),*(uint *)(iVar1 + 0x18) + 1,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

