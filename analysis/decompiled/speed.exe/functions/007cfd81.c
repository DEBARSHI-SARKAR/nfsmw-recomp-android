/* speed.exe 007cfd81 FUN_007cfd81; analysis pseudocode, not buildable source.
 * calls 007d0ab0 _inconsistency
 */

void FUN_007cfd81(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != *(int *)(unaff_EBP + 0x14)) {
    _inconsistency();
  }
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

