/* speed.exe 00868768 Unwind@00868768; analysis pseudocode, not buildable source.
 * calls 004037f0 FUN_004037f0
 */

void Unwind_00868768(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x758;
  }
  FUN_004037f0();
  return;
}

