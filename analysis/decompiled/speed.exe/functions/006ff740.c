/* speed.exe 006ff740 FUN_006ff740; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006ff740(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_1 + 4) = 1;
  if (param_2 == 0) {
    if (param_3 == 1) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      if (param_3 == 5) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return;
      }
      if (param_3 == 6) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        return;
      }
    }
  }
  else if (*(char *)(param_2 + 0x22) == '\0') {
    if (param_3 == 1) {
      *(int *)(param_1 + 0x44) = param_2;
      return;
    }
    if (param_3 == 5) {
      *(int *)(param_1 + 0x4c) = param_2;
      return;
    }
    if (param_3 == 6) {
      *(int *)(param_1 + 0x48) = param_2;
      return;
    }
  }
  return;
}

