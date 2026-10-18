/* speed.exe 007f6e7c FUN_007f6e7c; analysis pseudocode, not buildable source.
 * calls 007f60a1 FUN_007f60a1
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall FUN_007f6e7c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[0x42] == 0) {
    FUN_007f6337();
    param_1[0x42] = 0x40;
    param_1[2] = 0x40;
    FUN_007f60a1(param_2,param_3);
    FUN_007f6455();
  }
  else {
    param_1[0x17] = 0x40;
    FUN_007f60a1(param_2,param_3);
    if (*(int *)(*param_1 + 0x6c) == 0) {
      param_1[0x41] = param_1[0x41] + -1;
    }
  }
  return;
}

