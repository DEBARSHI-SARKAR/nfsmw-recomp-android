/* speed.exe 004ebcf0 FUN_004ebcf0; analysis pseudocode, not buildable source.
 * calls 004e62c0 FUN_004e62c0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004ebcf0(undefined4 param_1,byte param_2)

{
  FUN_004e62c0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

