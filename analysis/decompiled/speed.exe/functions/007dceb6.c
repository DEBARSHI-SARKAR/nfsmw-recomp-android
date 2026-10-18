/* speed.exe 007dceb6 FUN_007dceb6; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007dceb6(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + -0x1c) != 1) {
      (**(code **)(unaff_EBP + -0x1c))(*(undefined4 *)(unaff_EBP + -0x20));
    }
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}

