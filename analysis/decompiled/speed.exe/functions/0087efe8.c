/* speed.exe 0087efe8 Unwind@0087efe8; analysis pseudocode, not buildable source.
 * calls 006e8290 FUN_006e8290
 */

void Unwind_0087efe8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x48;
  }
  FUN_006e8290();
  return;
}

