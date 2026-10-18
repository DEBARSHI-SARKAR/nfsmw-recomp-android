/* speed.exe 0082444f FUN_0082444f; analysis pseudocode, not buildable source.
 * calls 00819670 FUN_00819670
 */

int FUN_0082444f(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00819670(param_4,*(undefined4 *)(param_1 + 0x1c),param_2 << 2);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2 * 4;
  return param_2;
}

