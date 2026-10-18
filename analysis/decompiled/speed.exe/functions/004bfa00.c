/* speed.exe 004bfa00 FUN_004bfa00; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b67b0 FUN_004b67b0
 */

int __thiscall FUN_004bfa00(int param_1,byte param_2)

{
  FUN_004b67b0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

