/* speed.exe 0077b6f0 FUN_0077b6f0; analysis pseudocode, not buildable source.
 * calls 00773e00 FUN_00773e00
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0077b6f0(int param_1,byte param_2)

{
  FUN_00773e00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x54,0);
  }
  return param_1;
}

