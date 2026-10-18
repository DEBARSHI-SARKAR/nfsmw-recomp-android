/* speed.exe 0064d950 FUN_0064d950; analysis pseudocode, not buildable source.
 */

void FUN_0064d950(int param_1,int param_2,int param_3)

{
  if (param_1 != 0) {
    if (param_3 == 0) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    else {
      if (param_3 == 1) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) - param_2;
        return;
      }
      if (param_3 == 2) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
        return;
      }
    }
  }
  return;
}

