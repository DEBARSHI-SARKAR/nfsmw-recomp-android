/* speed.exe 0043c120 FUN_0043c120; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043c150 FUN_0043c150
 */

int __thiscall FUN_0043c120(int param_1,byte param_2)

{
  FUN_0043c150();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

