/* speed.exe 006f95e0 FUN_006f95e0; analysis pseudocode, not buildable source.
 * calls 006f82f0 FUN_006f82f0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006f95e0(int param_1,byte param_2)

{
  FUN_006f82f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

