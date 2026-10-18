/* speed.exe 004331c0 FUN_004331c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00431ae0 FUN_00431ae0
 */

int __thiscall FUN_004331c0(int param_1,byte param_2)

{
  FUN_00431ae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x73c,0);
  }
  return param_1;
}

