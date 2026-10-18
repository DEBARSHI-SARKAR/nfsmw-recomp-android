/* speed.exe 006b98f0 FUN_006b98f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006b8730 FUN_006b8730
 */

int __thiscall FUN_006b98f0(int param_1,byte param_2)

{
  FUN_006b8730();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x194,0);
  }
  return param_1;
}

