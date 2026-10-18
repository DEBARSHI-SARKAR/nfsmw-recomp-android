/* speed.exe 0067f730 FUN_0067f730; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0067f760 FUN_0067f760
 */

int __thiscall FUN_0067f730(int param_1,byte param_2)

{
  FUN_0067f760();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xec,0);
  }
  return param_1;
}

