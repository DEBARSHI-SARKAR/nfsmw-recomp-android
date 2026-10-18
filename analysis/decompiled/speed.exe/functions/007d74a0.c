/* speed.exe 007d74a0 FUN_007d74a0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007d74a0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 1) {
    uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}

