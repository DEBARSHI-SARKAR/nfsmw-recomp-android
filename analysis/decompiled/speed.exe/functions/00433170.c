/* speed.exe 00433170 FUN_00433170; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00430af0 FUN_00430af0
 */

int __thiscall FUN_00433170(int param_1,byte param_2)

{
  FUN_00430af0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x15c,0);
  }
  return param_1;
}

