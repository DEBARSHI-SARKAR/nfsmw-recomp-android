/* speed.exe 00423830 FUN_00423830; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00418070 FUN_00418070
 */

int __thiscall FUN_00423830(int param_1,byte param_2)

{
  FUN_00418070();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x40,0);
  }
  return param_1;
}

