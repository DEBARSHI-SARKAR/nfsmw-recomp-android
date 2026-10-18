/* speed.exe 00711d10 FUN_00711d10; analysis pseudocode, not buildable source.
 * calls 007100b0 FUN_007100b0
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_00711d10(undefined4 param_1,byte param_2)

{
  FUN_007100b0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

