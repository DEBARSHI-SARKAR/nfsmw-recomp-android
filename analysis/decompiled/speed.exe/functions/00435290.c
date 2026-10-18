/* speed.exe 00435290 FUN_00435290; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004334b0 FUN_004334b0
 */

int __thiscall FUN_00435290(int param_1,byte param_2)

{
  FUN_004334b0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7ac,0);
  }
  return param_1;
}

