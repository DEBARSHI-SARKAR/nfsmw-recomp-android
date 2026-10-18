/* speed.exe 006b9bf0 FUN_006b9bf0; analysis pseudocode, not buildable source.
 * calls 006b8a00 FUN_006b8a00
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b9bf0(int param_1,byte param_2)

{
  FUN_006b8a00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xd8,0);
  }
  return param_1;
}

