/* speed.exe 007f7006 FUN_007f7006; analysis pseudocode, not buildable source.
 * calls 007f6258 FUN_007f6258
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall
FUN_007f7006(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  if (param_1[0x42] == 0) {
    FUN_007f6337();
    param_1[0x42] = 0x80;
    FUN_007f6258(param_2,param_3,param_4,param_5,param_6);
    FUN_007f6455();
  }
  else {
    FUN_007f6258(param_2,param_3,param_4,param_5,param_6);
    if (*(int *)(*param_1 + 0x6c) == 0) {
      param_1[0x41] = param_1[0x41] + -1;
    }
  }
  return;
}

