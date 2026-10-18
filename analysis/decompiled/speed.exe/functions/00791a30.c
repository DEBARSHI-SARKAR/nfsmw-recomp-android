/* speed.exe 00791a30 FUN_00791a30; analysis pseudocode, not buildable source.
 * calls 00791a50 FUN_00791a50
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00791a30(undefined4 param_1,byte param_2)

{
  FUN_00791a50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

