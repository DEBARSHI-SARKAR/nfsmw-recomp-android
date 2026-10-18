/* speed.exe 0047afd0 FUN_0047afd0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004775b0 FUN_004775b0
 */

undefined4 __thiscall FUN_0047afd0(undefined4 param_1,byte param_2)

{
  FUN_004775b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

