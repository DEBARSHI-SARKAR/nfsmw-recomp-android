/* speed.exe 006b4be0 FUN_006b4be0; analysis pseudocode, not buildable source.
 * calls 006b4c10 thunk_FUN_006a3e20
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b4be0(int param_1,byte param_2)

{
  thunk_FUN_006a3e20();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa0,0);
  }
  return param_1;
}

