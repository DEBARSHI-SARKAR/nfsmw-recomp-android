/* speed.exe 00785050 FUN_00785050; analysis pseudocode, not buildable source.
 * calls 00783250 FUN_00783250
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00785050(int param_1,byte param_2)

{
  FUN_00783250();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

