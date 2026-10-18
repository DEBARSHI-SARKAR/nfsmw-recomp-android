/* speed.exe 004eb9b0 FUN_004eb9b0; analysis pseudocode, not buildable source.
 * calls 004e5440 FUN_004e5440
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004eb9b0(undefined4 param_1,byte param_2)

{
  FUN_004e5440();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

