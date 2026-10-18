/* speed.exe 006b2f00 FUN_006b2f00; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ad1a0 FUN_006ad1a0
 */

int __thiscall FUN_006b2f00(int param_1,byte param_2)

{
  FUN_006ad1a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x104,0);
  }
  return param_1;
}

