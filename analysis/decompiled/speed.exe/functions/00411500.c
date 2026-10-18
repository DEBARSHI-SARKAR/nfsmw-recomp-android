/* speed.exe 00411500 FUN_00411500; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00406660 FUN_00406660
 */

int __thiscall FUN_00411500(int param_1,byte param_2)

{
  FUN_00406660();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

