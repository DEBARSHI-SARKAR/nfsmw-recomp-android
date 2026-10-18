/* speed.exe 005625a0 FUN_005625a0; analysis pseudocode, not buildable source.
 * calls 00560150 FUN_00560150
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005625a0(undefined4 param_1,byte param_2)

{
  FUN_00560150();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

