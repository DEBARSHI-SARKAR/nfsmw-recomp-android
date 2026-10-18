/* speed.exe 006f2510 FUN_006f2510; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006eeb60 FUN_006eeb60
 */

int __thiscall FUN_006f2510(int param_1,byte param_2)

{
  FUN_006eeb60();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10,0);
  }
  return param_1;
}

