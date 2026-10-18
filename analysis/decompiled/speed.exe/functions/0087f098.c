/* speed.exe 0087f098 Unwind@0087f098; analysis pseudocode, not buildable source.
 * calls 006e8290 FUN_006e8290
 */

void Unwind_0087f098(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_006e8290();
  return;
}

