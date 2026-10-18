/* speed.exe 0070e450 FUN_0070e450; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070c380 FUN_0070c380
 */

undefined4 __thiscall FUN_0070e450(undefined4 param_1,byte param_2)

{
  FUN_0070c380();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

