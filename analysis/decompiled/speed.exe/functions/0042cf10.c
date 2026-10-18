/* speed.exe 0042cf10 FUN_0042cf10; analysis pseudocode, not buildable source.
 * calls 0042cc70 FUN_0042cc70
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_0042cf10(undefined4 param_1,byte param_2)

{
  FUN_0042cc70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

