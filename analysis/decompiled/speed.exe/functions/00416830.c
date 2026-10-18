/* speed.exe 00416830 FUN_00416830; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00416860 FUN_00416860
 */

int __thiscall FUN_00416830(int param_1,byte param_2)

{
  FUN_00416860();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x130,0);
  }
  return param_1;
}

