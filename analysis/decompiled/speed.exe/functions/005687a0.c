/* speed.exe 005687a0 FUN_005687a0; analysis pseudocode, not buildable source.
 */

int FUN_005687a0(int param_1)

{
  if (param_1 == 2) {
    return 0x31;
  }
  if (param_1 == 3) {
    return 0x32;
  }
  if (param_1 == 4) {
    return 0x33;
  }
  if (param_1 == 5) {
    return 0x34;
  }
  if (param_1 == 6) {
    return 0x35;
  }
  if (param_1 == 7) {
    return 0x36;
  }
  if (param_1 == 8) {
    return 0x37;
  }
  if (param_1 == 9) {
    return 0x38;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),param_1 == 0) * 4 + 0x4e;
}

