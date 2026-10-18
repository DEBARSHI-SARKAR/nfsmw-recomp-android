/* speed.exe 006b9590 FUN_006b9590; analysis pseudocode, not buildable source.
 * calls 006b7d80 FUN_006b7d80
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b9590(int param_1,byte param_2)

{
  FUN_006b7d80();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x194,0);
  }
  return param_1;
}

