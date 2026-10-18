/* speed.exe 00868a28 Unwind@00868a28; analysis pseudocode, not buildable source.
 * calls 00403780 FUN_00403780
 */

void Unwind_00868a28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x7cc;
  }
  FUN_00403780();
  return;
}

