/* speed.exe 005e9c70 FUN_005e9c70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e3b90 FUN_005e3b90
 */

int __thiscall FUN_005e9c70(int param_1,byte param_2)

{
  FUN_005e3b90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x80,0);
  }
  return param_1;
}

