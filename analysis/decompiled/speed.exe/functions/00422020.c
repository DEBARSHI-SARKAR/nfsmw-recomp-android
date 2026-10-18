/* speed.exe 00422020 FUN_00422020; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00413e40 FUN_00413e40
 */

int __thiscall FUN_00422020(int param_1,byte param_2)

{
  FUN_00413e40();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xb0,0);
  }
  return param_1;
}

