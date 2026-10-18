/* speed.exe 004f7ea0 FUN_004f7ea0; analysis pseudocode, not buildable source.
 * calls 004f5d60 FUN_004f5d60
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7ea0(undefined4 param_1,byte param_2)

{
  FUN_004f5d60();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

