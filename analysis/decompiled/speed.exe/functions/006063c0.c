/* speed.exe 006063c0 FUN_006063c0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006063c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (0 < param_2) {
    do {
      if (uVar1 <= *(uint *)(param_1 + 0x28)) {
        if (0 < param_2) {
          return 0;
        }
        break;
      }
      param_2 = param_2 + -1;
      if ((*(byte *)(uVar1 + 8) & 1) == 0) {
        param_2 = param_2 - *(int *)(uVar1 + 0x14);
      }
      uVar1 = uVar1 - 0x18;
    } while (0 < param_2);
  }
  if (uVar1 == *(uint *)(param_1 + 0x28)) {
    return 0;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_3 + 0x5c) = 0;
    return 1;
  }
  *(int *)(param_3 + 0x5c) = (int)(uVar1 - *(uint *)(param_1 + 0x28)) / 0x18;
  return 1;
}

