/* speed.exe 00868518 Unwind@00868518; analysis pseudocode, not buildable source.
 * calls 00403710 FUN_00403710
 */

void Unwind_00868518(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x4c;
  }
  FUN_00403710();
  return;
}

