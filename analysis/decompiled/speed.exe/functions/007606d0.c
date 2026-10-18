/* speed.exe 007606d0 FUN_007606d0; analysis pseudocode, not buildable source.
 * calls 0075f190 FUN_0075f190
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_007606d0(int param_1,byte param_2)

{
  FUN_0075f190();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

