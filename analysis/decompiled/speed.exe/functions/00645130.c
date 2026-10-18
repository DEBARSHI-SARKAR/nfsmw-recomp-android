/* speed.exe 00645130 FUN_00645130; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00644840 thunk_FUN_006434f0
 */

undefined4 __thiscall FUN_00645130(undefined4 param_1,byte param_2)

{
  thunk_FUN_006434f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

