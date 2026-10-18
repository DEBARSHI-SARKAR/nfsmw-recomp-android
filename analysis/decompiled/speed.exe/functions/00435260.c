/* speed.exe 00435260 FUN_00435260; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004331f0 FUN_004331f0
 */

int __thiscall FUN_00435260(int param_1,byte param_2)

{
  FUN_004331f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7c4,0);
  }
  return param_1;
}

