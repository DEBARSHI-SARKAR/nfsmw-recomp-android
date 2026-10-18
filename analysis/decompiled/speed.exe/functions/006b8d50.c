/* speed.exe 006b8d50 FUN_006b8d50; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006b8d80 thunk_FUN_006b6910
 */

int __thiscall FUN_006b8d50(int param_1,byte param_2)

{
  thunk_FUN_006b6910();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x330,0);
  }
  return param_1;
}

