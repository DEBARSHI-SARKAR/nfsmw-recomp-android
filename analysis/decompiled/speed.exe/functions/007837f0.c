/* speed.exe 007837f0 FUN_007837f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00783730 FUN_00783730
 */

int __thiscall FUN_007837f0(int param_1,byte param_2)

{
  FUN_00783730();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x98,0);
  }
  return param_1;
}

