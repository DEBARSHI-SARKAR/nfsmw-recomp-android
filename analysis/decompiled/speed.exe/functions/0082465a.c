/* speed.exe 0082465a FUN_0082465a; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082465a(int param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 1) {
    if (param_4 != 1) {
      if (param_4 != 2) {
        return 0xffffffff;
      }
      if (*(int *)(param_1 + 0x10) != param_2) {
        return 0xffffffff;
      }
      if (*(int *)(param_2 + 0xc) != param_1) {
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
LAB_008246dd:
      *(undefined4 *)(param_2 + 0xc) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 0x10) != param_2) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 8) != param_1) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    if (param_3 != 2) {
      return 0xffffffff;
    }
    if (param_4 != 1) {
      if (param_4 != 2) {
        return 0xffffffff;
      }
      if (*(int *)(param_1 + 0x14) != param_2) {
        return 0xffffffff;
      }
      if (*(int *)(param_2 + 0xc) != param_1) {
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_008246dd;
    }
    if (*(int *)(param_1 + 0x14) != param_2) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 8) != param_1) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  return 0;
}

