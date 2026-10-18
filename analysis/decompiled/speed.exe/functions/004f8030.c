/* speed.exe 004f8030 FUN_004f8030; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004f5f60 FUN_004f5f60
 */

undefined4 __thiscall FUN_004f8030(undefined4 param_1,byte param_2)

{
  FUN_004f5f60();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

