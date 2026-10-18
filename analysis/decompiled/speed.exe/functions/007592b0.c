/* speed.exe 007592b0 FUN_007592b0; analysis pseudocode, not buildable source.
 * calls 00756740 FUN_00756740
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_007592b0(int param_1,byte param_2)

{
  FUN_00756740();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xd0,0);
  }
  return param_1;
}

