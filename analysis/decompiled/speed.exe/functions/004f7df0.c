/* speed.exe 004f7df0 FUN_004f7df0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004f5b50 FUN_004f5b50
 */

undefined4 __thiscall FUN_004f7df0(undefined4 param_1,byte param_2)

{
  FUN_004f5b50();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

