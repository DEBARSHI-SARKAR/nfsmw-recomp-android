/* speed.exe 00421e20 FUN_00421e20; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00421e50 FUN_00421e50
 */

int __thiscall FUN_00421e20(int param_1,byte param_2)

{
  FUN_00421e50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,100,0);
  }
  return param_1;
}

