/* speed.exe 00791b00 FUN_00791b00; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00791b00(int param_1,int param_2)

{
  if (param_2 == 3) {
    return *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x6c) +
           *(int *)(param_1 + 100) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) +
           *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x70) +
           *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x38);
  }
  param_2 = param_2 * 0x30;
  return *(int *)(param_1 + param_2 + 0x40) + *(int *)(param_1 + 0x3c + param_2) +
         *(int *)(param_1 + 0x38 + param_2) + *(int *)(param_1 + param_2 + 0x34);
}

