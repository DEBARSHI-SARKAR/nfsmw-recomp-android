/* speed.exe 00515e60 FUN_00515e60; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_00515e60(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_00460ca0(*(undefined4 *)(param_1 + 0x24),param_2,0x100);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return;
}

