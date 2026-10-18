/* speed.exe 004f7c40 FUN_004f7c40; analysis pseudocode, not buildable source.
 * calls 004f58f0 FUN_004f58f0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7c40(undefined4 param_1,byte param_2)

{
  FUN_004f58f0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

