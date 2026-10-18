/* speed.exe 006b8030 FUN_006b8030; analysis pseudocode, not buildable source.
 * calls 006b7e00 FUN_006b7e00
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b8030(int param_1,byte param_2)

{
  FUN_006b7e00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1d0,0);
  }
  return param_1;
}

