/* speed.exe 00704610 FUN_00704610; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 006ff6d0 FUN_006ff6d0
 */

undefined4 __thiscall FUN_00704610(undefined4 param_1,byte param_2)

{
  FUN_006ff6d0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

