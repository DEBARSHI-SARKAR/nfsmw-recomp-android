/* speed.exe 00576800 FUN_00576800; analysis pseudocode, not buildable source.
 */

bool FUN_00576800(byte param_1,int param_2,int param_3)

{
  if (param_3 == -2) {
    if ((param_1 & 1) != 0) {
      return *(char *)((int)&DAT_0091cd14 + param_2 * 8 + 1) != -1;
    }
    if ((param_1 & 2) != 0) {
      return *(char *)((int)&DAT_0091cd10 + param_2 * 8 + 1) != -1;
    }
  }
  else if ((param_1 & 2) != 0) {
    return *(char *)((int)&DAT_0091cd10 + param_2 * 8 + 1) == param_3;
  }
  return *(char *)((int)&DAT_0091cd14 + param_2 * 8 + 1) == param_3;
}

