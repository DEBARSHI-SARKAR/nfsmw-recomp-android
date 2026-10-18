/* speed.exe 007ca495 FUN_007ca495; analysis pseudocode, not buildable source.
 * calls 007ca530 FUN_007ca530
 */

void FUN_007ca495(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_007ca530();
  }
  return;
}

