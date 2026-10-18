/* speed.exe 0069fe20 FUN_0069fe20; analysis pseudocode, not buildable source.
 * calls 00690a00 FUN_00690a00
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0069fe20(int param_1,byte param_2)

{
  FUN_00690a00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10c,0);
  }
  return param_1;
}

