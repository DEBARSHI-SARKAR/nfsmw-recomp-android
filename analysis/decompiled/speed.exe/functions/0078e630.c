/* speed.exe 0078e630 FUN_0078e630; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0078e630(int param_1,int param_2)

{
  if (param_2 == 3) {
    return *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x70) +
           *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x38);
  }
  return *(int *)(param_1 + param_2 * 0x30 + 0x40) + *(int *)(param_1 + 0x38 + param_2 * 0x30);
}

