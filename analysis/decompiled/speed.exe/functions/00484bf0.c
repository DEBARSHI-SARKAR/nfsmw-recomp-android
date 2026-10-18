/* speed.exe 00484bf0 FUN_00484bf0; analysis pseudocode, not buildable source.
 * calls 004840f0 FUN_004840f0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00484bf0(int param_1,byte param_2)

{
  FUN_004840f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

