/* speed.exe 00781670 FUN_00781670; analysis pseudocode, not buildable source.
 * calls 0077f970 FUN_0077f970
 * calls 0077fcf0 FUN_0077fcf0
 * calls 0077fdf0 FUN_0077fdf0
 * calls 0077fab0 FUN_0077fab0
 */

void FUN_00781670(byte param_1)

{
  if ((param_1 & 8) != 0) {
    FUN_0077fdf0(100);
    FUN_0077fcf0(8);
  }
  if ((param_1 & 4) != 0) {
    FUN_0077f970(0x19);
  }
  if ((param_1 & 0x10) != 0) {
    FUN_0077fab0(0x19);
  }
  return;
}

