/* speed.exe 005e5110 FUN_005e5110; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e5140 FUN_005e5140
 */

int __thiscall FUN_005e5110(int param_1,byte param_2)

{
  FUN_005e5140();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c,0);
  }
  return param_1;
}

