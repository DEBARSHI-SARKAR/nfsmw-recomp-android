/* speed.exe 006b1da0 FUN_006b1da0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a9390 FUN_006a9390
 */

int __thiscall FUN_006b1da0(int param_1,byte param_2)

{
  FUN_006a9390();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c4,0);
  }
  return param_1;
}

