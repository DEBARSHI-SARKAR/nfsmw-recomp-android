/* speed.exe 0069f6c0 FUN_0069f6c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006900e0 FUN_006900e0
 */

int __thiscall FUN_0069f6c0(int param_1,byte param_2)

{
  FUN_006900e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x120,0);
  }
  return param_1;
}

