/* speed.exe 00645d50 FUN_00645d50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00644d90 FUN_00644d90
 */

int __thiscall FUN_00645d50(int param_1,byte param_2)

{
  FUN_00644d90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

