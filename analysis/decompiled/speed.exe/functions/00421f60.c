/* speed.exe 00421f60 FUN_00421f60; analysis pseudocode, not buildable source.
 * calls 00421f90 FUN_00421f90
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00421f60(int param_1,byte param_2)

{
  FUN_00421f90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x50,0);
  }
  return param_1;
}

