/* speed.exe 004e9080 FUN_004e9080; analysis pseudocode, not buildable source.
 * calls 004e1fb0 FUN_004e1fb0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e9080(undefined4 param_1,byte param_2)

{
  FUN_004e1fb0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

