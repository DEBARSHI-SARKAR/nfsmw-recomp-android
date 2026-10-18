/* speed.exe 00645da0 FUN_00645da0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00644e10 FUN_00644e10
 */

int __thiscall FUN_00645da0(int param_1,byte param_2)

{
  FUN_00644e10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

