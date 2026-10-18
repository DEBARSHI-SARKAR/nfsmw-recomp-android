/* speed.exe 0077cfa0 FUN_0077cfa0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0077cc40 thunk_FUN_0077c490
 */

undefined4 __thiscall FUN_0077cfa0(undefined4 param_1,byte param_2)

{
  thunk_FUN_0077c490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

