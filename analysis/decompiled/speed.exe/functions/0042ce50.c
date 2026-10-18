/* speed.exe 0042ce50 FUN_0042ce50; analysis pseudocode, not buildable source.
 * calls 0042c990 FUN_0042c990
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042ce50(undefined4 param_1,byte param_2)

{
  FUN_0042c990();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

