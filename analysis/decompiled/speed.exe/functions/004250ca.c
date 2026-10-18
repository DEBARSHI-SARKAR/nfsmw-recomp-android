/* speed.exe 004250ca Catch@004250ca; analysis pseudocode, not buildable source.
 * calls 0040dcd0 FUN_0040dcd0
 */

undefined * Catch_004250ca(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040dcd0(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  return &DAT_004250ea;
}

