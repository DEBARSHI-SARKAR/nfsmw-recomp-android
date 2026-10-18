/* speed.exe 00549a40 FUN_00549a40; analysis pseudocode, not buildable source.
 * calls 00533890 FUN_00533890
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00549a40(undefined4 param_1,byte param_2)

{
  FUN_00533890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

