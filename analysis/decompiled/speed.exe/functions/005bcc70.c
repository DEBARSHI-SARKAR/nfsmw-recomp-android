/* speed.exe 005bcc70 FUN_005bcc70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005bcc90 FUN_005bcc90
 */

undefined4 __thiscall FUN_005bcc70(undefined4 param_1,byte param_2)

{
  FUN_005bcc90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

