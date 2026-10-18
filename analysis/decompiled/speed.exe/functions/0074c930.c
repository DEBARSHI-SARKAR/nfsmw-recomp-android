/* speed.exe 0074c930 FUN_0074c930; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00744940 FUN_00744940
 */

int __thiscall FUN_0074c930(int param_1,byte param_2)

{
  FUN_00744940();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x60,0);
  }
  return param_1;
}

