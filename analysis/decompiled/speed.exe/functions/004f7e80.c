/* speed.exe 004f7e80 FUN_004f7e80; analysis pseudocode, not buildable source.
 * calls 004f5cd0 FUN_004f5cd0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7e80(undefined4 param_1,byte param_2)

{
  FUN_004f5cd0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

