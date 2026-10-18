/* speed.exe 005e9d10 FUN_005e9d10; analysis pseudocode, not buildable source.
 * calls 005e3d10 FUN_005e3d10
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_005e9d10(int param_1,byte param_2)

{
  FUN_005e3d10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c,0);
  }
  return param_1;
}

