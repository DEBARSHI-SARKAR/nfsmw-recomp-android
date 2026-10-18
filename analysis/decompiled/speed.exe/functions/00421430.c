/* speed.exe 00421430 FUN_00421430; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00421460 FUN_00421460
 */

int __thiscall FUN_00421430(int param_1,byte param_2)

{
  FUN_00421460();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x60,0);
  }
  return param_1;
}

