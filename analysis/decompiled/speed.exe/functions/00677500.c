/* speed.exe 00677500 FUN_00677500; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00414cc0 FUN_00414cc0
 */

int __thiscall FUN_00677500(int param_1,byte param_2)

{
  FUN_00414cc0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

