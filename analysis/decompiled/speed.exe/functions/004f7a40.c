/* speed.exe 004f7a40 FUN_004f7a40; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004f5550 FUN_004f5550
 */

undefined4 __thiscall FUN_004f7a40(undefined4 param_1,byte param_2)

{
  FUN_004f5550();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

