/* speed.exe 0052f640 FUN_0052f640; analysis pseudocode, not buildable source.
 * calls 0051f070 FUN_0051f070
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0052f640(undefined4 param_1,byte param_2)

{
  FUN_0051f070();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

