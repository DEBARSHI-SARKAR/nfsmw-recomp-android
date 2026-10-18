/* speed.exe 004f7af0 FUN_004f7af0; analysis pseudocode, not buildable source.
 * calls 004f5660 FUN_004f5660
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7af0(undefined4 param_1,byte param_2)

{
  FUN_004f5660();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

