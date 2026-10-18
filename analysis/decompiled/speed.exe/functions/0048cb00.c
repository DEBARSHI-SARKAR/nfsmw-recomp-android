/* speed.exe 0048cb00 FUN_0048cb00; analysis pseudocode, not buildable source.
 * calls 0048ca40 FUN_0048ca40
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0048cb00(int param_1,byte param_2)

{
  FUN_0048ca40();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

