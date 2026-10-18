/* speed.exe 0063cb70 FUN_0063cb70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00633e60 FUN_00633e60
 */

int __thiscall FUN_0063cb70(int param_1,byte param_2)

{
  FUN_00633e60();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c,0);
  }
  return param_1;
}

