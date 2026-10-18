/* speed.exe 0041ffa0 FUN_0041ffa0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00411700 FUN_00411700
 */

int __thiscall FUN_0041ffa0(int param_1,byte param_2)

{
  FUN_00411700();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xb8,0);
  }
  return param_1;
}

