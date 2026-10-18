/* speed.exe 00835d00 FUN_00835d00; analysis pseudocode, not buildable source.
 * calls 00835d00 FUN_00835d00
 */

void FUN_00835d00(int param_1,int param_2,int param_3)

{
  if (param_2 < 7) {
    if (param_2 != 0x1000) {
      if (param_2 != 0) {
        if (0xe < *(int *)(param_1 + 0x58)) {
          return;
        }
        if (param_3 == 1) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        *(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x58) * 4) = param_2;
        return;
      }
      if (*(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x58) * 4) == 0) {
        return;
      }
      do {
        FUN_00835d00(param_1,0x1000,1);
      } while (*(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x58) * 4) != 0);
      return;
    }
  }
  else if (param_2 != 0x1000) {
    return;
  }
  if (*(int *)(param_1 + 0x58) < 1) {
    return;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  return;
}

