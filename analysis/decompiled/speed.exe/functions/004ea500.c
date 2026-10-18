/* speed.exe 004ea500 FUN_004ea500; analysis pseudocode, not buildable source.
 * calls 004e3f00 FUN_004e3f00
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004ea500(undefined4 param_1,byte param_2)

{
  FUN_004e3f00();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

