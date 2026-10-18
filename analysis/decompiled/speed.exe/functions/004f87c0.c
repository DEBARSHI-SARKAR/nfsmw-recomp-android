/* speed.exe 004f87c0 FUN_004f87c0; analysis pseudocode, not buildable source.
 * calls 004f6bb0 FUN_004f6bb0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f87c0(undefined4 param_1,byte param_2)

{
  FUN_004f6bb0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

