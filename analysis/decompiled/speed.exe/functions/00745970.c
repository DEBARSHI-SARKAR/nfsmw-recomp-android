/* speed.exe 00745970 FUN_00745970; analysis pseudocode, not buildable source.
 * calls 007454d0 FUN_007454d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00745970(int param_1,byte param_2)

{
  FUN_007454d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xf0,0);
  }
  return param_1;
}

