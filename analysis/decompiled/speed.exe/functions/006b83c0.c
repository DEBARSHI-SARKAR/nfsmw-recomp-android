/* speed.exe 006b83c0 FUN_006b83c0; analysis pseudocode, not buildable source.
 * calls 006b83f0 FUN_006b83f0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b83c0(int param_1,byte param_2)

{
  FUN_006b83f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x194,0);
  }
  return param_1;
}

