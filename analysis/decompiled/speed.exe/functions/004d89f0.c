/* speed.exe 004d89f0 FUN_004d89f0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004d8a10 FUN_004d8a10
 */

undefined4 __thiscall FUN_004d89f0(undefined4 param_1,byte param_2)

{
  FUN_004d8a10();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

