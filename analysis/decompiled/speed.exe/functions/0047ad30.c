/* speed.exe 0047ad30 FUN_0047ad30; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004750f0 FUN_004750f0
 */

undefined4 __thiscall FUN_0047ad30(undefined4 param_1,byte param_2)

{
  FUN_004750f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

