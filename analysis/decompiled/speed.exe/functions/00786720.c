/* speed.exe 00786720 FUN_00786720; analysis pseudocode, not buildable source.
 * calls 00784ba0 FUN_00784ba0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00786720(int param_1,byte param_2)

{
  FUN_00784ba0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

