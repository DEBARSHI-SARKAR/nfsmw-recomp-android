/* speed.exe 005c0c50 FUN_005c0c50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005be250 FUN_005be250
 */

undefined4 __thiscall FUN_005c0c50(undefined4 param_1,byte param_2)

{
  FUN_005be250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

