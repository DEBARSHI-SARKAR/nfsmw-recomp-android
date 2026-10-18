/* speed.exe 00484ba0 FUN_00484ba0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006fc560 FUN_006fc560
 */

int __thiscall FUN_00484ba0(int param_1,byte param_2)

{
  FUN_006fc560();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x14,0);
  }
  return param_1;
}

