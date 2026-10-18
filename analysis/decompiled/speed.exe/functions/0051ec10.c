/* speed.exe 0051ec10 FUN_0051ec10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0051ec00 FUN_0051ec00
 */

undefined4 __thiscall FUN_0051ec10(undefined4 param_1,byte param_2)

{
  FUN_0051ec00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

