/* speed.exe 004e5d10 FUN_004e5d10; analysis pseudocode, not buildable source.
 * calls 004d9940 FUN_004d9940
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004e5d10(undefined4 param_1,byte param_2)

{
  FUN_004d9940();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

