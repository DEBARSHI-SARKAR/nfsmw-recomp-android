/* speed.exe 007f70b5 FUN_007f70b5; analysis pseudocode, not buildable source.
 * calls 007f5cf1 FUN_007f5cf1
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 */

void __thiscall FUN_007f70b5(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x10c) = param_2;
  if (*(int *)(param_1 + 0x108) == 0) {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      FUN_007f6337();
      *(undefined4 *)(param_1 + 0x108) = 0x100;
      *(undefined1 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = 1;
      FUN_007f6455();
      return;
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x108) != 0x100) {
      return;
    }
    if (param_2 == 0) {
      FUN_007f5cf1();
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x10c);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(undefined4 *)(param_1 + 0x120),uVar1);
  return;
}

