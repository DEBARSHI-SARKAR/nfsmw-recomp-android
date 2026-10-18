/* speed.exe 004ebba0 FUN_004ebba0; analysis pseudocode, not buildable source.
 * calls 004e5700 FUN_004e5700
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004ebba0(undefined4 param_1,byte param_2)

{
  FUN_004e5700();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

