/* speed.exe 00672810 FUN_00672810; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0066fb40 FUN_0066fb40
 */

int __thiscall FUN_00672810(int param_1,byte param_2)

{
  FUN_0066fb40();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,8,0);
  }
  return param_1;
}

