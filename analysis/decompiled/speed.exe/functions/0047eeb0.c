/* speed.exe 0047eeb0 FUN_0047eeb0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0047cb70 FUN_0047cb70
 */

undefined4 __thiscall FUN_0047eeb0(undefined4 param_1,byte param_2)

{
  FUN_0047cb70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

