/* speed.exe 007f95c3 FUN_007f95c3; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007f95c3(void)

{
  undefined4 uVar1;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  byte in_stack_00000020;
  uint in_stack_00000024;
  
  if (7 < in_stack_00000024) {
    return 1;
  }
  if ((in_stack_00000010 & 1) != 0) {
    return 2;
  }
  if (in_stack_00000024 == 1) {
    if ((in_stack_00000020 & 7) != 0) {
      return 3;
    }
    if ((in_stack_0000001c & 7) == 0) goto LAB_007f962b;
    in_stack_0000001c = in_stack_0000001c & 3;
  }
  else {
    if ((in_stack_00000020 & 3) != 0) {
      return 3;
    }
    if ((in_stack_0000001c & 3) == 0) goto LAB_007f962b;
    in_stack_0000001c = in_stack_0000001c & 1;
  }
  if (in_stack_0000001c != 0) {
    return 4;
  }
  in_stack_00000014 = in_stack_00000014 - 1;
LAB_007f962b:
  if ((in_stack_00000024 == 7) && (0x400 < (int)(in_stack_00000014 & 0xfffffffe))) {
    return 5;
  }
  if ((1 < (int)(in_stack_00000014 & 0xfffffffe)) && (0 < in_stack_00000018)) {
                    /* WARNING: Could not recover jumptable at 0x007f967f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_007f990c)[in_stack_00000024])();
    return uVar1;
  }
  return 0;
}

