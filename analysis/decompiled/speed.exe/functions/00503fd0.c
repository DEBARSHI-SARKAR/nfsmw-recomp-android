/* speed.exe 00503fd0 FUN_00503fd0; analysis pseudocode, not buildable source.
 * calls 004ff130 thunk_FUN_0045a430
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00503fd0(int param_1,byte param_2)

{
  thunk_FUN_0045a430();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xa0,0);
  }
  return param_1;
}

