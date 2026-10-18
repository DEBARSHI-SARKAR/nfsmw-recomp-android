/* speed.exe 004eb860 FUN_004eb860; analysis pseudocode, not buildable source.
 * calls 004e53b0 FUN_004e53b0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004eb860(undefined4 param_1,byte param_2)

{
  FUN_004e53b0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

