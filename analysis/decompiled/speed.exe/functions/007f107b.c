/* speed.exe 007f107b FUN_007f107b; analysis pseudocode, not buildable source.
 */

void FUN_007f107b(uint param_1)

{
  if ((param_1 & 0x2000000) != 0) {
    PTR_FUN_00907fa8 = &LAB_007f1791;
    PTR_LAB_00907fac = &LAB_007f1685;
    return;
  }
  if ((param_1 & 0x400000) != 0) {
    PTR_FUN_00907fa8 = &LAB_007f15d1;
    PTR_LAB_00907fac = &LAB_007f143b;
    return;
  }
  if ((param_1 & 0x800000) != 0) {
    PTR_FUN_00907fa8 = &LAB_007f1387;
    PTR_LAB_00907fac = &LAB_007f129d;
    return;
  }
  PTR_FUN_00907fa8 = FUN_007f11e3;
  PTR_LAB_00907fac = &LAB_007f10e8;
  return;
}

