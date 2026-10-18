/* speed.exe 00688630 FUN_00688630; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00686c20 FUN_00686c20
 */

int __thiscall FUN_00688630(int param_1,byte param_2)

{
  FUN_00686c20();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xac,0);
  }
  return param_1;
}

