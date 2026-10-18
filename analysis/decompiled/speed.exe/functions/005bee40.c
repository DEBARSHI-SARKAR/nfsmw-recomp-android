/* speed.exe 005bee40 FUN_005bee40; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005bee60 FUN_005bee60
 */

undefined4 __thiscall FUN_005bee40(undefined4 param_1,byte param_2)

{
  FUN_005bee60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

