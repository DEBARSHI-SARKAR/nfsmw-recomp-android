/* speed.exe 00645510 FUN_00645510; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00645540 FUN_00645540
 */

int __thiscall FUN_00645510(int param_1,byte param_2)

{
  FUN_00645540();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x30,0);
  }
  return param_1;
}

