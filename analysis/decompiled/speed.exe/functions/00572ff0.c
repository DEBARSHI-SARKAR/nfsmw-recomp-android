/* speed.exe 00572ff0 FUN_00572ff0; analysis pseudocode, not buildable source.
 */

int FUN_00572ff0(uint param_1)

{
  if ((param_1 & 1) != 0) {
    return 0;
  }
  if ((param_1 & 2) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  return (-(uint)((param_1 & 8) != 0) & 4) - 1;
}

