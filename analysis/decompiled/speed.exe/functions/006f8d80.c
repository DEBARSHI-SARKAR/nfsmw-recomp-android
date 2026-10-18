/* speed.exe 006f8d80 FUN_006f8d80; analysis pseudocode, not buildable source.
 * calls 006f8ce0 FUN_006f8ce0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006f8d80(int param_1,byte param_2)

{
  FUN_006f8ce0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

