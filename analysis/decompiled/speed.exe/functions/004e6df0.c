/* speed.exe 004e6df0 FUN_004e6df0; analysis pseudocode, not buildable source.
 * calls 004e6e10 thunk_FUN_004bf260
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e6df0(undefined4 param_1,byte param_2)

{
  thunk_FUN_004bf260();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

