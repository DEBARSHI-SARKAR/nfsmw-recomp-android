/* speed.exe 006fac40 FUN_006fac40; analysis pseudocode, not buildable source.
 * calls 006f9070 FUN_006f9070
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006fac40(int param_1,byte param_2)

{
  FUN_006f9070();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa0,0);
  }
  return param_1;
}

