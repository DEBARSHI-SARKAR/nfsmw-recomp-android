/* speed.exe 00484170 FUN_00484170; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00481280 FUN_00481280
 */

int __thiscall FUN_00484170(int param_1,byte param_2)

{
  FUN_00481280();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

