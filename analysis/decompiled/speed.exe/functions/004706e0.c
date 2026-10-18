/* speed.exe 004706e0 FUN_004706e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004706d0 FUN_004706d0
 */

int __thiscall FUN_004706e0(int param_1,byte param_2)

{
  FUN_004706d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

