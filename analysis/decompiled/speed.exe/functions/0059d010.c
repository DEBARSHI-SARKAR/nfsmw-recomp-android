/* speed.exe 0059d010 FUN_0059d010; analysis pseudocode, not buildable source.
 * calls 0059d030 FUN_0059d030
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0059d010(undefined4 param_1,byte param_2)

{
  FUN_0059d030();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

