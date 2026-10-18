/* speed.exe 00421ca0 FUN_00421ca0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00421cd0 FUN_00421cd0
 */

int __thiscall FUN_00421ca0(int param_1,byte param_2)

{
  FUN_00421cd0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x5c,0);
  }
  return param_1;
}

