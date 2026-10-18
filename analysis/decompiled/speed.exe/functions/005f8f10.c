/* speed.exe 005f8f10 FUN_005f8f10; analysis pseudocode, not buildable source.
 * calls 005f8960 FUN_005f8960
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_005f8f10(undefined4 param_1,byte param_2)

{
  FUN_005f8960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

