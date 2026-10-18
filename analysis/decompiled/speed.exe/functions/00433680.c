/* speed.exe 00433680 FUN_00433680; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00432180 FUN_00432180
 */

int __thiscall FUN_00433680(int param_1,byte param_2)

{
  FUN_00432180();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x744,0);
  }
  return param_1;
}

