/* speed.exe 0078b800 FUN_0078b800; analysis pseudocode, not buildable source.
 */

int FUN_0078b800(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    if (param_1 == 0) {
      return param_2 + 0xe;
    }
    if (param_1 == 1) {
      return param_2 + 0x12;
    }
    if (param_1 == 2) {
      return param_2 + 0x16;
    }
  }
  else if (param_3 == 2) {
    if (param_1 == 0) {
      return param_2 + 0x1b;
    }
    if (param_1 == 1) {
      return param_2 + 0x1f;
    }
    if (param_1 == 2) {
      return param_2 + 0x23;
    }
  }
  if (param_1 == 0) {
    return param_2 + 1;
  }
  if (param_1 == 1) {
    return param_2 + 5;
  }
  if (param_1 == 2) {
    return param_2 + 9;
  }
  return -1;
}

