/* speed.exe 00434fb0 FUN_00434fb0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432e90 FUN_00432e90
 */

int __thiscall FUN_00434fb0(int param_1,byte param_2)

{
  FUN_00432e90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x3b4,0);
  }
  return param_1;
}

