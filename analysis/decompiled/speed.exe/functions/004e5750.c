/* speed.exe 004e5750 FUN_004e5750; analysis pseudocode, not buildable source.
 * calls 004d9530 FUN_004d9530
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e5750(undefined4 param_1,byte param_2)

{
  FUN_004d9530();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

