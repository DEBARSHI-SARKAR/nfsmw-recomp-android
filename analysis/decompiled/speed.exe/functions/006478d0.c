/* speed.exe 006478d0 FUN_006478d0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00647900 thunk_FUN_00646a90
 */

int __thiscall FUN_006478d0(int param_1,byte param_2)

{
  thunk_FUN_00646a90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2c,0);
  }
  return param_1;
}

