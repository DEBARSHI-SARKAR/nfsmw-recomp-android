/* speed.exe 00783220 FUN_00783220; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00781eb0 FUN_00781eb0
 */

int __thiscall FUN_00783220(int param_1,byte param_2)

{
  FUN_00781eb0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

