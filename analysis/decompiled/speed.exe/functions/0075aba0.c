/* speed.exe 0075aba0 FUN_0075aba0; analysis pseudocode, not buildable source.
 * calls 00759080 FUN_00759080
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0075aba0(int param_1,byte param_2)

{
  FUN_00759080();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa0,0);
  }
  return param_1;
}

