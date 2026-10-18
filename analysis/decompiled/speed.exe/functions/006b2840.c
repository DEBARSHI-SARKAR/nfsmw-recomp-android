/* speed.exe 006b2840 FUN_006b2840; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ac0a0 FUN_006ac0a0
 */

int __thiscall FUN_006b2840(int param_1,byte param_2)

{
  FUN_006ac0a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x13c,0);
  }
  return param_1;
}

