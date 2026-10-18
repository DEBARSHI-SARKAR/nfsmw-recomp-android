/* speed.exe 0042edb0 FUN_0042edb0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00426ff0 FUN_00426ff0
 */

int __thiscall FUN_0042edb0(int param_1,byte param_2)

{
  FUN_00426ff0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x6c,0);
  }
  return param_1;
}

