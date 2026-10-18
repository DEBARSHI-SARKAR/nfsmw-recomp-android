/* speed.exe 00515c00 FUN_00515c00; analysis pseudocode, not buildable source.
 */

void FUN_00515c00(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
    *(undefined4 *)(param_1 + 0x60) = param_2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(param_1);
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

