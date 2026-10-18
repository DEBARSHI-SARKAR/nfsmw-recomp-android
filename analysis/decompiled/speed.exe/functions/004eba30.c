/* speed.exe 004eba30 FUN_004eba30; analysis pseudocode, not buildable source.
 * calls 004e54f0 FUN_004e54f0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004eba30(undefined4 param_1,byte param_2)

{
  FUN_004e54f0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

