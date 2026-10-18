/* speed.exe 0064ea00 FUN_0064ea00; analysis pseudocode, not buildable source.
 * calls 0064ea00 FUN_0064ea00
 */

void FUN_0064ea00(int param_1,uint param_2,int param_3)

{
  if (param_2 < 0x100) {
    *(int *)(param_1 + 0x2564 + param_2 * 4) = param_3;
    return;
  }
  do {
    param_3 = param_3 + 1;
    FUN_0064ea00(param_1,*(undefined4 *)(param_1 + 0x1524 + param_2 * 4),param_3);
    param_2 = *(uint *)(param_1 + 0x1d44 + param_2 * 4);
  } while (0xff < param_2);
  *(int *)(param_1 + 0x2564 + param_2 * 4) = param_3;
  return;
}

