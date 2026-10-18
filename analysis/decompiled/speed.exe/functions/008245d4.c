/* speed.exe 008245d4 FUN_008245d4; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008245d4(int param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 1) {
    if (param_4 == 1) {
      if (*(int *)(param_2 + 8) != 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_2 + 8) = param_1;
    }
    else {
      if (param_4 != 2) {
        return 0xffffffff;
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_2 + 0xc) = param_1;
    }
    *(undefined1 *)(param_2 + 0x1a) = 1;
  }
  else {
    if (param_3 != 2) {
      return 0xffffffff;
    }
    if (param_4 == 1) {
      if (*(int *)(param_2 + 8) != 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x14) = param_2;
      *(int *)(param_2 + 8) = param_1;
    }
    else {
      if (param_4 != 2) {
        return 0xffffffff;
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x14) = param_2;
      *(int *)(param_2 + 0xc) = param_1;
    }
    *(undefined1 *)(param_2 + 0x1a) = 2;
  }
  return 0;
}

