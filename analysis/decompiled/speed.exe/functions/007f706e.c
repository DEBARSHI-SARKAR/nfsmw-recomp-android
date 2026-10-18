/* speed.exe 007f706e FUN_007f706e; analysis pseudocode, not buildable source.
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall FUN_007f706e(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x108) == 0) {
    FUN_007f6337();
    *(int *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    FUN_007f6455();
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(param_1 + 0x11c);
  }
  return;
}

