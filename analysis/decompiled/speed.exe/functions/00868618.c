/* speed.exe 00868618 Unwind@00868618; analysis pseudocode, not buildable source.
 * calls 0042e260 FUN_0042e260
 */

void Unwind_00868618(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_0042e260();
  return;
}

