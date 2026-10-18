/* speed.exe 00644740 FUN_00644740; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00644230 FUN_00644230
 */

undefined4 __thiscall FUN_00644740(undefined4 param_1,byte param_2)

{
  FUN_00644230();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

