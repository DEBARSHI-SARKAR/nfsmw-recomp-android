/* speed.exe 0043fac0 FUN_0043fac0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0043faf0 thunk_FUN_00438190
 */

int __thiscall FUN_0043fac0(int param_1,byte param_2)

{
  thunk_FUN_00438190();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x20,0);
  }
  return param_1;
}

