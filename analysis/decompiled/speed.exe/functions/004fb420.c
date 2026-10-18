/* speed.exe 004fb420 FUN_004fb420; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004fb420(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_2 + param_3 * 4) = *(int *)(param_1 + 0x1c);
    param_3 = param_3 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_2 + param_3 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x3c);
    param_3 = param_3 + 1;
  }
  return param_3;
}

