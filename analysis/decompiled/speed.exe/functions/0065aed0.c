/* speed.exe 0065aed0 FUN_0065aed0; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_0065aed0(int param_1)

{
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return;
    }
    FUN_0065ad80();
    FUN_00463ca0(DAT_00925914,param_1);
  }
  return;
}

