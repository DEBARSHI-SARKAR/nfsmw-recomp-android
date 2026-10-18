/* speed.exe 0087b918 Unwind@0087b918; analysis pseudocode, not buildable source.
 * calls 0067ea40 FUN_0067ea40
 */

void Unwind_0087b918(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0xac;
  }
  FUN_0067ea40();
  return;
}

