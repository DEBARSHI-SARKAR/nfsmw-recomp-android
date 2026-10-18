/* speed.exe 0078fec0 FUN_0078fec0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0078fbc0 FUN_0078fbc0
 */

undefined4 __thiscall FUN_0078fec0(undefined4 param_1,byte param_2)

{
  FUN_0078fbc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

