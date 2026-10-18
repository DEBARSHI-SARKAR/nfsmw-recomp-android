/* speed.exe 006b9390 FUN_006b9390; analysis pseudocode, not buildable source.
 * calls 006b7720 FUN_006b7720
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b9390(int param_1,byte param_2)

{
  FUN_006b7720();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x130,0);
  }
  return param_1;
}

