/* speed.exe 00868058 Unwind@00868058; analysis pseudocode, not buildable source.
 * calls 0040e720 FUN_0040e720
 */

void Unwind_00868058(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_0040e720();
  return;
}

