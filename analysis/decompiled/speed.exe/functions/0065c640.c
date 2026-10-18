/* speed.exe 0065c640 FUN_0065c640; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00653c30 FUN_00653c30
 */

int __thiscall FUN_0065c640(int param_1,byte param_2)

{
  FUN_00653c30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x38,0);
  }
  return param_1;
}

