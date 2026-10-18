/* speed.exe 00420340 FUN_00420340; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00420370 FUN_00420370
 */

int __thiscall FUN_00420340(int param_1,byte param_2)

{
  FUN_00420370();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc0,0);
  }
  return param_1;
}

