/* speed.exe 0082d650 FUN_0082d650; analysis pseudocode, not buildable source.
 */

void FUN_0082d650(int param_1,char param_2)

{
  *(char *)(param_1 + 3) = param_2;
  (**(code **)(**(int **)(param_1 + 300) + 0x30))
            (((int)param_2 * (int)*(char *)(param_1 + 2)) / 100);
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

