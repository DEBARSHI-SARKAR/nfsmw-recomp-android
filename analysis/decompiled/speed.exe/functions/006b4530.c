/* speed.exe 006b4530 FUN_006b4530; analysis pseudocode, not buildable source.
 * calls 006b0300 FUN_006b0300
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b4530(int param_1,byte param_2)

{
  FUN_006b0300();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc4,0);
  }
  return param_1;
}

