/* speed.exe 0087ef18 Unwind@0087ef18; analysis pseudocode, not buildable source.
 * calls 00468400 FUN_00468400
 */

void Unwind_0087ef18(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x2c;
  }
  FUN_00468400();
  return;
}

