/* speed.exe 00866350 FUN_00866350; analysis pseudocode, not buildable source.
 */

int FUN_00866350(int param_1,int param_2,int param_3)

{
  if (param_2 == 0x6e646576) {
    return 0;
  }
  if (param_2 == 0x69646576) {
    if (param_3 == -1) {
      return *(int *)(param_1 + 0x1358);
    }
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1358))) {
      return param_3 * 0x30 + 0x11e0 + param_1;
    }
  }
  else if (param_2 == 0x6f646576) {
    if (param_3 == -1) {
      return *(int *)(param_1 + 0x26dc);
    }
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x26dc))) {
      return param_3 * 0x34 + 0x2544 + param_1;
    }
  }
  return -1;
}

