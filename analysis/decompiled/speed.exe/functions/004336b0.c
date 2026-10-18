/* speed.exe 004336b0 FUN_004336b0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432240 FUN_00432240
 */

int __thiscall FUN_004336b0(int param_1,byte param_2)

{
  FUN_00432240();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7a4,0);
  }
  return param_1;
}

