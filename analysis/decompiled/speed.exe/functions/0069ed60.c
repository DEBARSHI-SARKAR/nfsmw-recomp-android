/* speed.exe 0069ed60 FUN_0069ed60; analysis pseudocode, not buildable source.
 * calls 0068fac0 FUN_0068fac0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0069ed60(int param_1,byte param_2)

{
  FUN_0068fac0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10c,0);
  }
  return param_1;
}

