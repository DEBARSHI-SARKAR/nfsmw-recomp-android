/* speed.exe 00532190 FUN_00532190; analysis pseudocode, not buildable source.
 * calls 005321b0 FUN_005321b0
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00532190(undefined4 param_1,byte param_2)

{
  FUN_005321b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

