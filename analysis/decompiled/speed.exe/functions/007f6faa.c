/* speed.exe 007f6faa FUN_007f6faa; analysis pseudocode, not buildable source.
 * calls 007f621a FUN_007f621a
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall FUN_007f6faa(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1[0x42] == 0) {
    FUN_007f6337();
    param_1[0x42] = 0x20;
    FUN_007f621a(param_2,param_3,param_4);
    FUN_007f6455();
  }
  else {
    FUN_007f621a(param_2,param_3,param_4);
    if (*(int *)(*param_1 + 0x6c) == 0) {
      param_1[0x41] = param_1[0x41] + -1;
    }
  }
  return;
}

