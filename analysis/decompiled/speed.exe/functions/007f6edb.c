/* speed.exe 007f6edb FUN_007f6edb; analysis pseudocode, not buildable source.
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall FUN_007f6edb(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_1[0x42] == 0) {
    FUN_007f6337();
    param_1[0x42] = 4;
    param_1[2] = 4;
    param_1[3] = param_2;
    param_1[4] = param_3;
    param_1[5] = param_4;
    FUN_007f6455();
  }
  else {
    param_1[0x18] = param_2;
    param_1[0x19] = param_3;
    param_1[0x17] = 4;
    param_1[0x1a] = param_4;
    if (*(int *)(*param_1 + 0x6c) == 0) {
      param_1[0x41] = param_1[0x41] + -1;
    }
  }
  return;
}

