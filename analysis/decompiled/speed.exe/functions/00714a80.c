/* speed.exe 00714a80 FUN_00714a80; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070e9a0 FUN_0070e9a0
 */

undefined4 __thiscall FUN_00714a80(undefined4 param_1,byte param_2)

{
  FUN_0070e9a0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

