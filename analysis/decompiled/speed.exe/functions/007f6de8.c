/* speed.exe 007f6de8 FUN_007f6de8; analysis pseudocode, not buildable source.
 * calls 007f60f4 FUN_007f60f4
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall
FUN_007f6de8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  if (param_1[0x42] == 0) {
    FUN_007f6337();
    param_1[0x42] = 0x10;
    FUN_007f60f4(1,&param_2,param_5,param_6);
    *(undefined4 *)(param_1[6] + 0x44) = param_3;
    *(undefined4 *)(param_1[6] + 0x48) = param_4;
    *(undefined1 *)(param_1[6] + 0x5c) = 1;
    FUN_007f6455();
  }
  else {
    FUN_007f60f4(1,&param_2,param_5,param_6);
    *(undefined4 *)(param_1[0x1b] + 0x44) = param_3;
    *(undefined4 *)(param_1[0x1b] + 0x48) = param_4;
    *(undefined1 *)(param_1[0x1b] + 0x5c) = 1;
    if (*(int *)(*param_1 + 0x6c) == 0) {
      param_1[0x41] = param_1[0x41] + -1;
    }
  }
  return;
}

