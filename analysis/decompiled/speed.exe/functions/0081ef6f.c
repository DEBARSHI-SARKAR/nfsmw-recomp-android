/* speed.exe 0081ef6f FUN_0081ef6f; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081ef6f(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x3f) = 1;
    return 0;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      *(undefined1 *)(param_1 + 0x3f) = 4;
      return 0;
    }
    if (param_2 == 3) {
      *(undefined1 *)(param_1 + 0x3f) = 5;
      *(undefined1 *)(param_1 + 0x40) = 1;
      return 0;
    }
    if (param_2 != 8) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3f) = 2;
  return 0;
}

