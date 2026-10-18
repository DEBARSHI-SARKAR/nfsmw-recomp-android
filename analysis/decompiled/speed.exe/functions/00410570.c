/* speed.exe 00410570 FUN_00410570; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00410500 FUN_00410500
 */

int __thiscall FUN_00410570(int param_1,byte param_2)

{
  FUN_00410500();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

