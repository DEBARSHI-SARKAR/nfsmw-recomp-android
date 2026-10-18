/* speed.exe 004f1680 FUN_004f1680; analysis pseudocode, not buildable source.
 * calls 004e8c50 FUN_004e8c50
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f1680(undefined4 param_1,byte param_2)

{
  FUN_004e8c50();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

