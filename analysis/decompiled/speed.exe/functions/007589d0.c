/* speed.exe 007589d0 FUN_007589d0; analysis pseudocode, not buildable source.
 * calls 00758890 FUN_00758890
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_007589d0(undefined4 param_1,byte param_2)

{
  FUN_00758890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

