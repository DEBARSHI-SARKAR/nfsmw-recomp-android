/* speed.exe 00868818 Unwind@00868818; analysis pseudocode, not buildable source.
 * calls 0042e1b0 FUN_0042e1b0
 */

void Unwind_00868818(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_0042e1b0();
  return;
}

