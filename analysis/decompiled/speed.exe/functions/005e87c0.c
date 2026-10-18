/* speed.exe 005e87c0 FUN_005e87c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e2d50 FUN_005e2d50
 */

int __thiscall FUN_005e87c0(int param_1,byte param_2)

{
  FUN_005e2d50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x40,0);
  }
  return param_1;
}

