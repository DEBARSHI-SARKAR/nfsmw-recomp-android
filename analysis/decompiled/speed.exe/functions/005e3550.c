/* speed.exe 005e3550 FUN_005e3550; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005dc910 thunk_FUN_0045a430
 */

undefined4 __thiscall FUN_005e3550(undefined4 param_1,byte param_2)

{
  thunk_FUN_0045a430();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

