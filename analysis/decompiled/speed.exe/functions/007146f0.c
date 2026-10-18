/* speed.exe 007146f0 FUN_007146f0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070e640 FUN_0070e640
 */

undefined4 __thiscall FUN_007146f0(undefined4 param_1,byte param_2)

{
  FUN_0070e640();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

