/* speed.exe 004e1250 FUN_004e1250; analysis pseudocode, not buildable source.
 * calls 004e1270 FUN_004e1270
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e1250(undefined4 param_1,byte param_2)

{
  FUN_004e1270();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

