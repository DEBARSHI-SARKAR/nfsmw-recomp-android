/* speed.exe 004354d0 FUN_004354d0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00433760 FUN_00433760
 */

int __thiscall FUN_004354d0(int param_1,byte param_2)

{
  FUN_00433760();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28c,0);
  }
  return param_1;
}

