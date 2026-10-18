/* speed.exe 005e9cc0 FUN_005e9cc0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005e3cf0 FUN_005e3cf0
 */

int __thiscall FUN_005e9cc0(int param_1,byte param_2)

{
  FUN_005e3cf0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28,0);
  }
  return param_1;
}

