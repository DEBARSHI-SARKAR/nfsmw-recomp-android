/* speed.exe 006a7ea0 FUN_006a7ea0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0069bd70 FUN_0069bd70
 */

int __thiscall FUN_006a7ea0(int param_1,byte param_2)

{
  FUN_0069bd70();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xec,0);
  }
  return param_1;
}

