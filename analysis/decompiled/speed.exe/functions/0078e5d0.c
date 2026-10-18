/* speed.exe 0078e5d0 FUN_0078e5d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0078e5d0(int param_1,int param_2)

{
  if (param_2 == 3) {
    return *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x6c) +
           *(int *)(param_1 + 100) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
  }
  return *(int *)(param_1 + param_2 * 0x30 + 0x3c) + *(int *)(param_1 + 0x34 + param_2 * 0x30);
}

