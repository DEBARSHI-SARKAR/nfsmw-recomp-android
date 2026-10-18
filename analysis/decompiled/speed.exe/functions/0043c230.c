/* speed.exe 0043c230 FUN_0043c230; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00438190 FUN_00438190
 */

int __thiscall FUN_0043c230(int param_1,byte param_2)

{
  FUN_00438190();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

