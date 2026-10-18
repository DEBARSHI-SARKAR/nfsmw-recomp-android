/* speed.exe 007dd0bb FUN_007dd0bb; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007dd0bb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 8) {
    (**(code **)(unaff_EBP + -0x1c))(8,*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x5c));
  }
  else {
    (**(code **)(unaff_EBP + -0x1c))(*(undefined4 *)(unaff_EBP + 8));
  }
  if ((((*(int *)(unaff_EBP + 8) == 8) || (*(int *)(unaff_EBP + 8) == 0xb)) ||
      (*(int *)(unaff_EBP + 8) == 4)) &&
     (*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x58) = *(undefined4 *)(unaff_EBP + -0x24),
     *(int *)(unaff_EBP + 8) == 8)) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x5c) = *(undefined4 *)(unaff_EBP + -0x34);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

