/* speed.exe 00868688 Unwind@00868688; analysis pseudocode, not buildable source.
 * calls 004103d0 FUN_004103d0
 */

void Unwind_00868688(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_004103d0();
  return;
}

