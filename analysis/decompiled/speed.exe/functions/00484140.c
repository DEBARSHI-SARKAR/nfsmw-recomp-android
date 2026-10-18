/* speed.exe 00484140 FUN_00484140; analysis pseudocode, not buildable source.
 * calls 00481030 FUN_00481030
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00484140(int param_1,byte param_2)

{
  FUN_00481030();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7c,0);
  }
  return param_1;
}

