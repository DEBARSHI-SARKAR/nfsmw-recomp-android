/* speed.exe 0070e470 FUN_0070e470; analysis pseudocode, not buildable source.
 * calls 0070c3f0 FUN_0070c3f0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_0070e470(undefined4 param_1,byte param_2)

{
  FUN_0070c3f0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

