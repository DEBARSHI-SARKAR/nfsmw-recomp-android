/* speed.exe 006b8c90 FUN_006b8c90; analysis pseudocode, not buildable source.
 * calls 006b6910 FUN_006b6910
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b8c90(int param_1,byte param_2)

{
  FUN_006b6910();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x330,0);
  }
  return param_1;
}

