/* speed.exe 00404810 FUN_00404810; analysis pseudocode, not buildable source.
 * calls 004047b0 FUN_004047b0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00404810(int param_1,byte param_2)

{
  FUN_004047b0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xaf8,0);
  }
  return param_1;
}

