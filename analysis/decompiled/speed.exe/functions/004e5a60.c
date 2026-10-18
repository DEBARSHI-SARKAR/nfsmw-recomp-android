/* speed.exe 004e5a60 FUN_004e5a60; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004d9760 FUN_004d9760
 */

undefined4 __thiscall FUN_004e5a60(undefined4 param_1,byte param_2)

{
  FUN_004d9760();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

