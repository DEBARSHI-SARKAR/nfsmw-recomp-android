/* speed.exe 00789320 FUN_00789320; analysis pseudocode, not buildable source.
 * calls 00784410 FUN_00784410
 * calls 0077f970 FUN_0077f970
 * calls 00783d70 FUN_00783d70
 * calls 007844f0 FUN_007844f0
 * calls 00787710 FUN_00787710
 */

void __thiscall FUN_00789320(int param_1,byte param_2)

{
  if ((param_2 & 0xc) != 0) {
    FUN_00783d70(param_1 + 0x3c,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c),
                 *(int *)(param_1 + 0x84) == 1);
    if ((param_2 & 8) != 0) {
      FUN_00787710(param_1 + 0x3c,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c),param_1 + 0x5c);
    }
  }
  if ((param_2 & 4) != 0) {
    FUN_0077f970(0x15);
    FUN_007844f0(param_1 + 0x4c,param_1 + 0x3c,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c));
  }
  if ((param_2 & 0x10) != 0) {
    FUN_00784410(param_1 + 0x70,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}

