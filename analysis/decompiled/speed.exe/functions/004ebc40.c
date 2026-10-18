/* speed.exe 004ebc40 FUN_004ebc40; analysis pseudocode, not buildable source.
 * calls 004e5c70 FUN_004e5c70
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004ebc40(undefined4 param_1,byte param_2)

{
  FUN_004e5c70();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

