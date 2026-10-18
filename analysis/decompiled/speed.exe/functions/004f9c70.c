/* speed.exe 004f9c70 FUN_004f9c70; analysis pseudocode, not buildable source.
 * calls 004f9c90 thunk_FUN_004f68b0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f9c70(undefined4 param_1,byte param_2)

{
  thunk_FUN_004f68b0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

