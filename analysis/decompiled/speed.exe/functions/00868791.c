/* speed.exe 00868791 Unwind@00868791; analysis pseudocode, not buildable source.
 * calls 0042e420 FUN_0042e420
 */

void Unwind_00868791(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x760;
  }
  FUN_0042e420();
  return;
}

