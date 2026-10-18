/* speed.exe 004ebcd0 FUN_004ebcd0; analysis pseudocode, not buildable source.
 * calls 004e6150 FUN_004e6150
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004ebcd0(undefined4 param_1,byte param_2)

{
  FUN_004e6150();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

