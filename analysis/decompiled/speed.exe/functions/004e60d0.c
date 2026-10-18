/* speed.exe 004e60d0 FUN_004e60d0; analysis pseudocode, not buildable source.
 * calls 004d9d60 FUN_004d9d60
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e60d0(undefined4 param_1,byte param_2)

{
  FUN_004d9d60();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

